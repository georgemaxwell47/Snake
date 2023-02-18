#include <stdio.h>

void save(int ax,int ay,int mm,int rq,int q,int *(arx),int *(ary))
{
    FILE *fptr;
    fptr=fopen("record/save/ax.txt","w");
    fprintf(fptr,"%d",ax);
    fclose(fptr);

    FILE *fptr1;
    fptr1=fopen("record/save/bx.txt","w");
    fprintf(fptr1,"%d",ay);
    fclose(fptr1);

    FILE *fptr2;
    fptr2=fopen("record/save/m.txt","w");
    fprintf(fptr2,"%d",mm);
    fclose(fptr2);

    FILE *fptr8;
    fptr8=fopen("record/save/rq.txt","w");
    fprintf(fptr8,"%d",rq);
    fclose(fptr8);

    FILE *fptr9;
    fptr9=fopen("record/save/q.txt","w");
    fprintf(fptr9,"%d",q);
    fclose(fptr9);

    FILE *fptr3;
    fptr3=fopen("record/save/sax.txt","w");

    for(int i=0;i<mm;i++){
       fprintf(fptr3,"%d",*(arx+i));
       fprintf(fptr3,"\n");

    }
    fclose(fptr3);

    FILE *fptr5;
    fptr5=fopen("record/save/say.txt","w");

    for(int i=0;i<mm;i++){
       fprintf(fptr5,"%d",*(ary+i));
       fprintf(fptr5,"\n");

    }
    fclose(fptr5);



}
