#include <stdio.h>
int main()
{
    int i,n;
    FILE *fp;
    char str[20];
    fp=fopen("f1.txt","a");

    if (fp==NULL){
printf("File Cannot Found");
exit(1);
    }
  printf("Enter the string:\n");
  gets(str);
  n=strlen(str);
  printf("%d",n);
        fputs(str,fp);
        fclose(fp);

getch();
}
