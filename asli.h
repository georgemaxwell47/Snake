#include <SFML/Graphics.hpp>// do ta ketab khone ro add kon bad pest bezan ahmagh!
#include <SFML/Audio.hpp>
#include <time.h>
#include <string>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
#define n 1
#define maxx 500

#define dlayy 0.1
void save(int axa,int aya,int mm,int rq,int q,int arx[],int ary[]);
void load();
int rq=0;
using namespace sf;
using namespace std;
void count2();
int m=n;
struct mahal {
    int x,y;
}ma[maxx];

int random (int i){
    i=(rand()/10)*10;
    i=i%500;
    return i;
}
int q;
int puse=0;
void harkat (){
    for (int i=m;i>0;--i){
        ma[i].x=ma[i-1].x;
        ma[i].y=ma[i-1].y;
      }
    if(q==1){
        ma[0].x=ma[0].x-10;
    }
    if(q==2){
       ma[0].x=ma[0].x+10;
    }
    if(q==3){
        ma[0].y=ma[0].y-10;
    }
    if(q==4){
       ma[0].y=ma[0].y+10;
    }


}

int count(int difficul)
{
    srand(time(0));

    //int x=0,y=0;
    int w=0,bx=1,by=250,ax=400,ay=300,v=0,p;


    RenderWindow window(VideoMode(800, 700), "mar");
    SoundBuffer buffer;
    buffer.loadFromFile("audio/mixkit-fast-small-sweep-transition-166.wav");
    Sound sound;
    sound.setBuffer(buffer);



    Music music;
    music.openFromFile("audio/1 The Pink Panther Theme.wav");
    music.setVolume(50);
    music.play();

    Texture t1,t2;
    //t1.loadFromFile("download.jpg");
    //t2.loadFromFile("2.png");


    RectangleShape r2;
    r2.setFillColor(Color::White);
    r2.setSize(Vector2f(10.f,10.f));
    //r2.setPosition(100.f,350.f);



    RectangleShape r;
    r.setFillColor(Color::Blue);
    r.setSize(Vector2f(500.f,500.f));
    //r.setPosition(100.f,100.f);

    Clock clock;
    float zamsa,dlay;
   /* if(difficul==0){
        dlay=0.1;*/
    //}
    if(difficul==2){
        dlay=0.1;
    }

    if(difficul==1){
        dlay=0.03;
    }
    ///random
    ax=random(ax);
    ay=random(ay);



    RectangleShape r3;
    r3.setFillColor(Color::Green);
    r3.setSize(Vector2f(10.f,10.f));
    //r3.setPosition(100.f,100.f);
    r3.setPosition(bx,by);


//    Sprite s(t1);
  //  Sprite d(t2);
//    s.setTextureRect(IntRect(0,0,20,20));

    while (window.isOpen())
    {
        float time=clock.getElapsedTime().asSeconds();
        clock.restart();
        if(puse==0){
        zamsa=zamsa+time;
        }
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();

        }
        if(Keyboard::isKeyPressed(Keyboard::Left)  && q!=2){
            //r2.move(-10.f,0.f);
            q=1;
            //ma[0].x=ma[0].x-10;
            //for (int i=m;i>0;--i)
              //  {
                //    ma[i].x=ma[i-1].x;
                  //  ma[i].y=ma[i-1].y;
      //}

            }
        if(Keyboard::isKeyPressed(Keyboard::Right) && q!=1){
            q=2;
            //r2.move(10.f,0.f);
           //ma[0].x=ma[0].x+10;
            //for (int i=m;i>0;--i)
     //{ma[i].x=ma[i-1].x; ma[i].y=ma[i-1].y;}

     }
        if(Keyboard::isKeyPressed(Keyboard::Up) && q!=4){
            q=3;
            //r2.move(0.f,-10.f);
            /*ma[0].y=ma[0].y-10;
            for (int i=m;i>0;--i)
     {ma[i].x=ma[i-1].x; ma[i].y=ma[i-1].y;}}*/}
        if(Keyboard::isKeyPressed(Keyboard::Down) && q!=3){
           q=4;
           // r2.move(0.f,10.f);
            /*ma[0].y=ma[0].y+10;
            for (int i=m;i>0;--i)
     {ma[i].x=ma[i-1].x; ma[i].y=ma[i-1].y;}*/

            }
        if(Keyboard::isKeyPressed(Keyboard::Enter)){
            if(puse==1){
                puse=0;
            }
        }
        if(Keyboard::isKeyPressed(Keyboard::Space)){
            if(puse==0){
                puse=1;
            }
        }
            if(zamsa>dlay){
                zamsa=0;
                harkat();
            }


           // printf("%d ",ma[0].x);
           // printf("%d ",ma[0].y);
        for(int i=2;i<=m;i++){
            if(ma[i].x==ma[1].x && ma[i].y==ma[1].y){
                w=-1;
            }
        }
        if(ma[0].x==-10){
            w=-1;
        }
        if(ma[0].y==500){
            w=-1;
        }
        if(ma[0].x==500){
            w=-1;
        }
        if(ma[0].y==-10){
            w=-1;
        }
        if(w==-1){
           uyt++;
            return rq;
            window.close();
        }

        if(ax==ma[0].x && ay==ma[0].y){
            //v=random(bx);
            ax=random(ax);
            //p=random(by);
            printf("?1?");
            sound.play();
            rq++;
            m++;

            ay=random(ay);
            //r3.move(ax,ay);
           // x++;
            //y++;
        }
       // printf("%d",zamsa);
       int arx[500],ary[500];
    int arrx[maxx],arry[maxx];
    for(int i=0;i<m;i++){
        *(arx+i)=ma[i].x;
    }
    for(int iy=0;iy<m;iy++){
        *(ary+iy)=ma[iy].y;
    }
    if(Keyboard::isKeyPressed(Keyboard::S)){
            save(ax,ay,m,rq,q,arx,ary);
        }

    if(Keyboard::isKeyPressed(Keyboard::L)){
            load();
            m=loadmm;
            ax=loadax;
            ay=loaday;
            rq=loadrq;
            q=loadq;
            for(int i=0;i<m;i++){
                ma[i].x=*(nx+i);
            }
            for(int i=0;i<m;i++){
                ma[i].y=*(ny+i);
            }
        }


    Font font;
    font.loadFromFile("font/ARLRDBD.ttf");
    Text text;
    text.setFont(font);

    text.setCharacterSize(30);
    text.setColor(Color::Yellow);

    text.setString(to_string(rq));
    text.setPosition(510.f,0.f);


    Text text2;
    text2.setFont(font);

    text2.setCharacterSize(20);
    text2.setColor(Color::Yellow);

    text2.setString("press space to puse");
    text2.setPosition(510.f,40.f);

    Text text3;
    text3.setFont(font);

    text3.setCharacterSize(20);
    text3.setColor(Color::Yellow);

    text3.setString("press enter to countinue");
    text3.setPosition(510.f,80.f);

    Text text4;
    text4.setFont(font);

    text4.setCharacterSize(20);
    text4.setColor(Color::Yellow);

    text4.setString("press s to save");
    text4.setPosition(510.f,120.f);

    Text text5;
    text5.setFont(font);

    text5.setCharacterSize(20);
    text5.setColor(Color::Yellow);

    text5.setString("press l to load");
    text5.setPosition(510.f,160.f);
    //printf("%d ",axx);
  //  printf("%d ",ayy);
        window.clear();
        window.draw(r);
       // r2.setPosition(x,y);
        r3.setPosition(ax,ay);
        window.draw(r3);
        for(int i=0;i<m;i++){

            r2.setPosition(ma[i].x,ma[i].y);
            window.draw(r2);
        }
        window.draw(text);
        window.draw(text2);
        window.draw(text3);
        window.draw(text4);
        window.draw(text5);

        window.display();

    }

}
