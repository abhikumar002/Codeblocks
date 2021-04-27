#include <stdio.h>
struct book
{
    int bookid;
    char title[20];
    float price;
};

void main()
{
    struct book b1;
    int i,n;
    FILE *fp;
    fp=fopen("f1.txt","ab");

    if (fp==NULL){
printf("File Cannot Found");
exit(1);
    }

    printf("Enter the Book id,Title and Price:\n");
    scanf("%d",&b1.bookid);
    fflush(stdin);
    gets(b1.title);
    scanf("%f",&b1.price);
    fwrite(&b1,sizeof(b1),1,fp);
    fclose(fp);

}
