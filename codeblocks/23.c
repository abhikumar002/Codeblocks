#include <stdio.h>
#include <stdlib.h>
int main()
{
int a;
int b;
int flag=0;

 printf("enter the sequence here:");
 scanf("%d",&a);

while(a!=-1)
{
    scanf("%d",&b);
    if(a!=b)
    {
        flag=1;

    }

    a=b;
    scanf("%d",&b);
}


if(flag==0)
{
printf("0");
}
else if(flag==1)
{
printf("1");
}
return 0;
}












