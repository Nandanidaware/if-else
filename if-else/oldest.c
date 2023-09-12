
//Oldest and youngest among them
#include<stdio.h>
int main()
{
	int  A,B,C;
	scanf("%d%d%d",&A,&B,&C);
	if(A>B)
	{
		if(A>C)
		{
			printf("%d is oldest\n",A);
		
			if(B<C)
			{
				printf("%d is youngest\n",B);
			}
			else
			{
				printf("%d is youngest\n",C);
			}
		
		}
		else
		{
			printf("%d is oldest\n",C);
			if(A<B)
			{
				printf("%d is youngest\n",A);
			}
			else
			{
				printf("%d is youngest\n",B);
			}
		}
	}
	else if(B>C)
	{
		printf("%d is oldest\n",B);
		if(C<A)
		{
			printf("%d is youngest\n",C);
		}
		else
		{
			printf("%d is youngest\n",A);
		}
	}
	else
	{
		printf("%d is oldest\n",C);
		if(A<B)
		{
			printf("%d is youngest\n",A);
		}
		else
		{
			printf("%d is youngest\n",B);
		}
	}
	
	return 0;
}
