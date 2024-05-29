#include <graphics.h>
#include <stdio.h>
#include <math.h>

void draw(int X0, int Y0, int X1, int Y1)
{

    int dx = X1 - X0;
    int dy = Y1 - Y0;
    int i,steps;
    float Xinc,Yinc,X,Y;

    if( abs(dx) > abs(dy) ){

   steps = abs(dx);
    }else{
    steps = abs(dy);
	   }
    Xinc = dx / (float)steps;
    Yinc = dy / (float)steps;

     X = X0;
     Y = Y0;

    for (i = 0; i <= steps; i++)
    {
	putpixel(X, Y,RED);
	X += Xinc;
	Y += Yinc;
	delay(100);
    }
    getch();
   
}

int main(){
    int gd =DETECT,gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    draw(100,200,400,300);
    closegraph();
   
 return 0;
}

