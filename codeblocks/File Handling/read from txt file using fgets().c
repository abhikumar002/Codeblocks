#include <stdio.h>
int main()
{
     char str[10];
    int i,n;
    FILE *fp;
    fp=fopen("f1.txt","r");

    if (fp==NULL){
printf("File Cannot Found");
exit(1);
    }

   while(fgets(str,9,fp)!=NULL)
   {
       printf("%s",str);

   }
     fclose(fp);
}
