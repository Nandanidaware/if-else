

//SECOND MAX BETWEEN 4 NUMBER
#include<stdio.h>
int main()
{
	int A,B,C,D,M1,M2,SM1,SM2;
	scanf("%d%d%d%d",&A,&B,&C,&D);
	if(A>B)
	{
		M1=A;
		SM1=B;
		if(C>D)
		{
			M2=C;
			SM2=D;
			if(M1>M2)
			{
				if(M2>SM1)
				{
				
					printf("%d is SECOND MAX",M2);
				}
				else
				{
					printf("%d is SECOND MAX",SM1);
				}
			}
			else if(M1>SM2)
			{
				printf("%d is SECOND MAX",M1);
			}
			else
			{
				printf("%d is SECOND MAX",M2);
			}
			
		}
		else
		{
			M2=D;
			SM2=C;
			if(M1>M2)
			{
				if(M2>SM1)
				{
				
					printf("%d is SECOND MAX",M2);
				}
				else
				{
					printf("%d is SECOND MAX",SM1);
				}
			}
			else if(M1>SM2)
			{
				printf("%d is SECOND MAX",M1);
			}
			else
			{
				printf("%d is SECOND MAX",M2);
			}
			
			
		}
	}
	else
	{
		M1=B;
		SM1=A;
		if(C>D)
		{
			M2=C;
			SM2=D;
			if(M1>M2)
			{
				if(M2>SM1)
				{
				
					printf("%d is SECOND MAX",M2);
				}
				else
				{
					printf("%d is SECOND MAX",SM1);
				}
			}
			else if(M1>SM2)
			{
				printf("%d is SECOND MAX",M1);
			}
			else
			{
				printf("%d is SECOND MAX",M2);
			}
			
		}
		else
		{
			M2=D;
			SM2=C;
			if(M1>M2)
			{
				if(M2>SM1)
				{
				
					printf("%d is SECOND MAX",M2);
				}
				else
				{
					printf("%d is SECOND MAX",SM1);
				}
			}
			else if(M1>SM2)
			{
				printf("%d is SECOND MAX",M1);
			}
			else
			{
				printf("%d is SECOND MAX",M2);
			}
			
			
		}
		
	}
	return 0;
}
