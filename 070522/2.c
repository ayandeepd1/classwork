#include<stdio.h>

void find_factors(int *n)
{
	int i,s=1;
	printf("factors are: \n");
	for(i=1;i<=*n;i++)
	{
		if(*n%i==0)
		{
	     printf(" %d",i);
		 s=s*i;
		}
	}
	printf("\nproduct: %d",s);
}

int main()
{
	int i,n;
	printf("enter a number: ");
	scanf("%d",&n);
	find_factors(&n);	
}
