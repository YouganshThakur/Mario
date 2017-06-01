//                       created by Yougansh Thakur :)
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
int margin=130;
int rectWidth=15;

int calc(int i)
{
   return ((rectWidth+1)*i);
}
int colors[7]={0,1,14,0,6,12,4};
void draw_rect(int x,int y,int c)
{
   int ctrX,ctrY;
   ctrX=getmaxx()/2-margin;
   ctrY=getmaxy()/2-margin;

   setfillstyle(1,c);
   bar(ctrX+calc(x),ctrY+calc(y),ctrX+calc(x)+rectWidth,ctrY+calc(y)+rectWidth);
}
void main()
{
   int red=4,blue=1,yellow=14,black=16,brown=6,face=12;
   int pixel_buffer[14][16]={

  /*1*/{0,0,0,0,0,red,red,red,red,red,0,0,face,face,face,0},
  /*2*/{0,0,0,0,red,red,red,red,red,red,red,red,red,face,face,0},
  /*3*/{0,0,0,0,brown,brown,brown,face,face,black,face,0,red,red,red,0},
  /*4*/{0,0,0,brown,face,brown,face,face,face,black,face,face,face,red,red,0},
  /*5*/{0,0,0,brown,face,brown,brown,face,face,face,black,face,face,face,red,0},
  /*6*/{0,0,0,brown,brown,face,face,face,face,black,black,black,black,red,0,0},
  /*7*/{0,0,0,0,0,face,face,face,face,face,face,face,red,red,0,0},
  /*8*/{0,0,red,red,red,red,blue,red,red,red,blue,red,red,0,0,brown},
  /*9*/{face,face,red,red,red,red,red,blue,red,red,red,blue,0,0,brown,brown},
 /*10*/{face,face,face,red,red,red,red,blue,blue,blue,blue,yellow,blue,blue,brown,brown},
 /*11*/{0,face,0,0,blue,red,blue,blue,yellow,blue,blue,blue,blue,blue,brown,brown},
 /*12*/{0,0,brown,brown,brown,blue,blue,blue,blue,blue,blue,blue,blue,blue,brown,brown},
 /*13*/{0,brown,brown,brown,blue,blue,blue,blue,blue,blue,0,0,0,0,0,0},
 /*14*/{0,brown,brown,0,0,0,0,0,0,0,0,0,0,0,0,0}
   } ;
   int gd=DETECT,gm;
   initgraph(&gd,&gm,"c:\\turboc3\\bgi");
   setfillstyle(1,15);
   bar(0,0,getmaxx(),getmaxy());
   for(int i=0;i<14;i++)
   {
     for(int j=0;j<16;j++)
     {
       if(pixel_buffer[i][j]!=0)
       {
	  draw_rect(j,i,pixel_buffer[i][j]);
       }

     }
   }
   getch();
   closegraph();
}
