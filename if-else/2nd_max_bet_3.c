
//SECOND MAX BETWEEN THIRD NUMBER
#include<stdio.h>
int main()
{
	int A,B,C,M2,M1;
	scanf("%d%d%d",&A,&B,&C);
	if(A>B)
	{
		M1=A;
		M2=B;
		if(M1>C)
			if(C>M2)
			{
				printf("%d is SECOND MAX",C);
			}
			else
			{
				printf("%d is SECOND MAX",M2);
			}
		else
		{
			printf("%d is SECOND MAX",M1);
		}
	}
	else
	{
		M1=B;
		M2=A;
		if(M1>C)
			if(C>M2)
			{
				printf("%d is SECOND MAX",C);
			}
			else
			{
				printf("%d is SECOND MAX",M2);
			}
		else
		{
			printf("%d is SECOND MAX",M1);
		}
		
	}
	return 0;
}
