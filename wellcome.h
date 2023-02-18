#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <time.h>
#include <iostream>
#include <string.h>
using namespace std;
using namespace sf;
int uyt=1;
int adad;



int wellcome()
{
    Texture t1;
    t1.loadFromFile("image/snake-game.jpg");
    Sprite sprite(t1);
    FILE *fptr;
    fptr=fopen("record/recording.txt","r");
    fscanf(fptr,"%d",&adad);



RenderWindow window(VideoMode(1000, 700), "wellcome!",Style::Default);
Font font;
font.loadFromFile("font/ARLRDBD.ttf");
Text text;
text.setFont(font);

 text.setCharacterSize(30);
 text.setColor(Color::Green);
 text.setString(" press right to play hard \n press down to play easy \n best score ");

  while (window.isOpen()){
    Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
  }
        /*if(Keyboard::isKeyPressed(Keyboard::Up)){
            count(0);
            window.close();
        }*/
        if(Keyboard::isKeyPressed(Keyboard::Right)){
            return 1;
            window.close();}


        if(Keyboard::isKeyPressed(Keyboard::Down)){
            return 2;
            window.close();}

    Text text2;
    text2.setFont(font);

    text2.setCharacterSize(20);
    text2.setColor(Color::Yellow);
    text2.setString(to_string(adad));
    text2.setPosition(200.f,80.f);

    //text.move(5.f,0.f);
    window.clear();
    sprite.setPosition(0.f,150.f);
    window.draw(sprite);
    window.draw(text);
    window.draw(text2);
    window.display();


  }
  fclose(fptr);
}
