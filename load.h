#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
using namespace std;
int nx[500],ny[500];
int loadax,loaday,loadmm,loadrq,loadq;

void load()
{
    FILE *fptr;

    fptr=fopen("record/save/ax.txt","r");
    fscanf(fptr,"%d",&loadax);
    fclose(fptr);

    FILE *fptr1;
    fptr1=fopen("record/save/bx.txt","r");
    fscanf(fptr1,"%d",&loaday);
    fclose(fptr1);

    FILE *fptr2;
    fptr2=fopen("record/save/m.txt","r");
    fscanf(fptr2,"%d",&loadmm);
    fclose(fptr2);

    FILE *fptr8;
    fptr8=fopen("record/save/rq.txt","r");
    fscanf(fptr8,"%d",&loadrq);
    fclose(fptr8);

    FILE *fptr99;
    fptr99=fopen("record/save/q.txt","r");
    fscanf(fptr99,"%d",&loadq);
    fclose(fptr99);

   /* FILE *fp;
    fp=fopen("record/save/sax","r");
    for(int i=0;i<loadmm;i++){
    fscanf(fp,"%d\n",&axx[i]);
    //printf("%d",axx[i]);
    }
    fclose(fp);

*/
    ///////////

   int i,j,bozorg,kochak=99,sum;
   float h;
   FILE *fptr50;
   fptr50=fopen("record/save/sax.txt","r");
   for(i=0;i<loadmm;i++){
   fscanf(fptr50,"%d",&*(nx+i));
}
   FILE *fptr49;
   fptr49=fopen("record/save/say.txt","r");
   for(j=0;j<loadmm;j++){
   fscanf(fptr49,"%d",&*(ny+j));

}
//////////////


   // for(int i=0;i<loadmm;i++){
    //printf("%d",n[i]);
   // }










}
