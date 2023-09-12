
//THIRD MAX BETWEEN 4 NUMBER
#include<stdio.h>
int main()
{
	int A,B,C,D,MIN1,SMIN1,MIN2,SMIN2;
	scanf("%d%d%d%d",&A,&B,&C,&D);
	if(A<B)
	{
		MIN1=A;
		SMIN1=B;
		if(C<D)
		{
			MIN2=C;
			SMIN2=D;
			if(MIN1<MIN2)
			{
				if(MIN2<SMIN1)
				{
					printf("%d is THIRD MAX",MIN2);
				}
				else
				{
					printf("%d is THIRD MAX",SMIN1);
				}
			}
			else if(MIN1<SMIN2)
			{
				printf("%d is THIRD MAX",MIN1);
			}
			else
			{
				printf("%d is THIRD MAX",SMIN2);
			}
		}
		else
		{
			MIN2=D;
			SMIN2=C;
			if(MIN1<MIN2)
			{
				if(MIN2<SMIN1)
				{
					printf("%d is THIRD MAX",MIN2);
				}
				else
				{
					printf("%d is THIRD MAX",SMIN1);
				}
			}
			else if(MIN1<SMIN2)
			{
				printf("%d is THIRD MAX",MIN1);
			}
			else
			{
				printf("%d is THIRD MAX",SMIN2);
			}
			
		}
	}
	else
	{
		MIN1=B;
		SMIN1=A;
		if(C<D)
		{
			MIN2=C;
			SMIN2=D;
			if(MIN1<MIN2)
			{
				if(MIN2<SMIN1)
				{
					printf("%d is THIRD MAX",MIN2);
				}
				else
				{
					printf("%d is THIRD MAX",SMIN1);
				}
			}
			else if(MIN1<SMIN2)
			{
				printf("%d is THIRD MAX",MIN1);
			}
			else
			{
				printf("%d is THIRD MAX",SMIN2);
			}
		}
		else
		{
			MIN2=D;
			SMIN2=C;
			if(MIN1<MIN2)
			{
				printf("%d is THIRD MAX",SMIN1);
			
				if(MIN2<SMIN1)
				{
					printf("%d is THIRD MAX",MIN2);
				}
				else
				{
					printf("%d is THIRD MAX",SMIN1);
				}
			}
			
			else if(MIN1<SMIN2)
			{
				printf("%d is THIRD MAX",MIN1);
			}
			else
			{
				printf("%d is THIRD MAX",SMIN2);
			}
			
		}
		
	}
}
