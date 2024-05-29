#include <graphics.h>
#include <stdio.h>
#include <math.h>
#include<conio.h>

void main(){
    int gd=DETECT,gm,x1,y1,x2,y2,lx,ly,dy,dx,pk,i;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    printf("Enter the value of x1,y1:");
    scanf("%d %d",&x1,&y1);
    printf("Enter the value of x1,y1:");
    scanf("%d %d",&x2,&y2);
    setbkcolor(GREEN);

    dx = abs(x2-x1);
    dy = abs(y2-y1);
    if(x2>x1){
	lx=1;

    }else {
	lx = -1;
    }
     if(y2>y1){
	ly=1;

    }else {
	ly = -1;
    }

    putpixel(x1,y1, WHITE);
	delay(100);
    if(dx>dy){
	pk = 2*dy -dx;
	for(i=0;i<dx;i++){
	    if(pk<0){
		x1 = x1+lx;
		y1 = y1;
		pk = pk+2*dy;
	    }else{
		x1 = x1+lx;
		y1 = y1 + ly;
		pk = pk+2*dy - 2* dx;

	    }
	putpixel(x1,y1,WHITE);
	delay(100);
	}
    }else{
	  pk = 2*dx -dy;
	for(i=0;i<dx;i++){
	    if(pk<0){
		x1 = x1;
		y1 = y1+ly;
		pk = pk+2*dx;
	    }else{
		x1 = x1+lx;
		y1 = y1 + ly;
		pk = pk+2*dx - 2* dy;

	    }

	putpixel(x1,y1,WHITE);
	delay(100);
	}

    }
    getch();

}