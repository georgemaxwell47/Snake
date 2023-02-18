#include <SFML/Graphics.hpp>
#include <time.h>
#include "load.h"
#include "wellcome.h"
#include "asli.h"
#include "save.h"
#include "game over.h"

using namespace sf;
int moq=0;

int main(){

    if(moq==0){
        moq=wellcome();
    }
    if(moq==1 || moq==2){
        rq=count(moq);
    }
    if(uyt==2){
      over();
    }

}

