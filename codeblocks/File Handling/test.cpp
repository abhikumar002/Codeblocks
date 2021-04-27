
#include<graphics.h>
main()
{  int gd=0,gm;
   initgraph(&gd,&gm,"");
   circle(300,200,30);
   rectangle(450,56,567,90);
   getch();
   closegraph();
}
