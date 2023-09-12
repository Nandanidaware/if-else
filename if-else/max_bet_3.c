
//MAX BETWEEN THREE NUMBER
#include<stdio.h>
int main()
{
	int A,B,C,M1;
	scanf("%d%d%d",&A,&B,&C);
	if(A>B)
	{
		M1=A;
		if(M1>C)
		{
			printf("%d is greater\n",M1);
		}
		else
		{
			printf("%d is greater\n",C);
		}
	}
	else
	{
		M1=B;
		if(M1>C)
		{
			printf("%d is greater\n",M1);
		}
		else
		{
			printf("%d is greater\n",C);
		}
		return 0;
	}
}
