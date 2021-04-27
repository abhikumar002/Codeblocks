
#include<graphics.h>
main()
{  int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\Program Files\CodeBlocks\MinGW\include");
   circle(300,200,30);
   rectangle(450,56,567,90);
   line(450,56,567,90);
   getch();
   closegraph();
}
