#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
main()
{
  int i,n,j,a=0,s[100];
  char str[100][100];
  while(1)
  {
      system("cls");  //clear screen
      printf("1.Enter data\n");
      printf("2.View Enter data\n");
      printf("3.exit\n");
      scanf("%d",&n);

   if(n==1)
   {
     printf("Enter No.\n");
     scanf("%s",s[a]);
     a++;
   }
   else if(n==2)
   {   if(a==0)
     {
         printf("Data is empty");
         exit(0);
     }
     printf("Your data is \n");
     for(i=0;i<a;i++)
     {
         printf("%d\n",s[i]);
     }


     getch();
   }
   else if(n==3)
   {
     exit(0);
   }

  }


}
