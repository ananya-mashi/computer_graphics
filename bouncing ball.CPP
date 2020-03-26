#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

int main() {
 int gd = DETECT, gm;
 int i, x, y, flag=0;
 initgraph(&gd, &gm, "C:\\TC\\BGI");

 /* get mid positions in x and y-axis */
 x = getmaxx()/2;
 y = 30;


 while (!kbhit()) {
  if(y >= getmaxy()-30 || y <= 30)
     flag = !flag;
     //set deafult color to green color
  setcolor(GREEN);
     setfillstyle(SOLID_FILL, GREEN
     );
     circle(x, y, 30);
     floodfill(x, y, GREEN);

 /* delay for 50 milli seconds */
 delay(50);

 /* clears screen */
 cleardevice();

  if(flag){   //if ball touched screen
  y=y+5;
  }
  else{
  y=y-5;}
  }

    getch();
    closegraph();
    return 0;
}