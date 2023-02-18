#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <time.h>
#include <iostream>
#include <string.h>

using namespace std;
using namespace sf;

//void count();
void over()
{
    FILE *fptr;
    RenderWindow window(VideoMode(700, 700), "game over!",Style::Default);
    Font font;
    font.loadFromFile("font/ALGER.ttf");
    Text text;
    text.setFont(font);

    text.setCharacterSize(30);
    text.setColor(Color::Red);

    text.setString(" game over!\n your score is:");

    Text text2;
    text2.setFont(font);

    text2.setCharacterSize(30);
    text2.setColor(Color::Yellow);

    text2.setString(to_string(rq));
    text2.setPosition(240.f,37.f);

    if(rq>adad){
        fptr=fopen("record/recording.txt","w");
        fprintf(fptr,"%d",rq);
        adad=rq;
    }

    /*Text text3;
    text3.setFont(font);

    text3.setCharacterSize(30);
    text3.setColor(Color::Yellow);

    text3.setString(to_string(rq));
    text3.setPosition(210.f,55.f);*/




    while (window.isOpen()){
        Event event;
            while (window.pollEvent(event))
            {
                if (event.type == Event::Closed)
                    window.close();
    }

//text.move(5.f,0.f);
        window.clear();
        window.draw(text);
        window.draw(text2);
//        window.draw(text3);
        window.display();


  }
  fclose(fptr);

}

