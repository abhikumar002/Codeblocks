#include <stdio.h>
void main()
{
	int mat[100][100],n,i,j;
	int flag=0;
	printf("Enter the Size of matrix:");
	scanf("%d",&n);
	printf("Enter the values in the matrix:");

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}

	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if (mat[i][j]!=0)
			{
				flag=0;
			}
            else{
				flag=1;
			}
		}
	}


		if(flag==1)
		{
	     printf("Yes\n");

		}

	else {
		 for(i=0;i<n;i++)
		 {
			 for(j=i+1;j<n;j++)
			 {
				 if (mat[i][j]==0)
				 {
					 flag=1;
				 }
				 else{
					 flag=0;
				     }
			 }
		 }



		if(flag==1)
		{
	     printf("Yes\n");
		}
	}
		 if(flag==0)
		{
			printf("No\n");
		}
		return 0;

}
