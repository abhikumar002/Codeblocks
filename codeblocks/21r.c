#include <stdio.h>

int main()
{
int prev;
int curr;
int flag=0;
printf("Enter the sequence here:");
scanf("%d",prev);
 if(!(prev==-1))
 { scanf("%d",&curr);
        while(curr!=-1)
		{
			if(curr!=prev)
			    {
			    flag=1;
                printf("1");
                break;
				}
				prev=curr;
				scanf("%d",&curr);
        }

	}


if(flag==0)
    {
	printf("0");
    }
return 0;
}
