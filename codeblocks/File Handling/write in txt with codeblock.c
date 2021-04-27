#include <stdio.h>
int main()
{
    int i,n;
    FILE *fp;
  char s[100];
    fp=fopen("f1.txt","w");

    if (fp==NULL){
printf("File Cannot Found");
exit(1);
    }
    printf("Enter the string\n");
    gets(s);
   n=strlen(s);
   printf("%d",n);
    for(i=0;i<=strlen(s);i++)
        fputc(s[i],fp);
        fclose(fp);

getch();
}
