//TRIANGLE IS VALID OR NOT
#include<stdio.h>
int main()
{
	int A,B,C,S;
	scanf("%d%d%d",&A,&B,&C);
	S=A+B+C;
	if(S==180)
	{
		printf("VALID");
	}
	else
	{
		printf("INVALID");
	}
	return 0;
	
}
