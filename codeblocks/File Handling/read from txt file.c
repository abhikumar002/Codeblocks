#include <stdio.h>
int main()
{
     char ch;
    int i,n;
    FILE *fp;
    fp=fopen("f1.txt","r");

    if (fp==NULL){
printf("File Cannot Found");
exit(1);
    }

    ch=fgetc(fp);
   while(!feof(fp))
   {
       printf("%c",ch);
       ch= fgetc(fp);
   }
     fclose(fp);
}
