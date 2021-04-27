#include <stdio.h>

main()
{
char b[10],s[10]="Abhsihek";
printf("%s",s);
strcpy(b,s);
if(strcmp(s,strrev(b))==0)
    printf("\nthe given is palindrome");
else
printf("\nthe given string is not palindrome");

printf("\n%s",strrev(s));
}
