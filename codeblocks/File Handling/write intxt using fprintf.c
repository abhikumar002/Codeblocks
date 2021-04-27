/*
#include<stdio.h>
main()
{
FILE *fp;
int a,b;
fp=fopen("f1.txt","w");
printf("Enter two nos.");
scanf("%d %d",&a,&b);
fprintf(fp,"Sum of %d and %d is %d",a,b,a+b);
fclose(fp);
}
*/

#include <stdio.h>
#include <string.h>
main()
{
char b[10],s[10]="Abhishek";
printf("%s",s);
strcpy(b,s);
//if(strcmp(s,strev(b))==0)
    printf("\nthe given is palindrome");
//else
//printf("\nthe given string is not palindrome");

printf("\n%s",strrev(b));
}
