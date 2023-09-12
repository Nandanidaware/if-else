
//Increment/Decrement
#include<stdio.h>
int main()
{
	int N,Increment,Decrement;
	scanf("%d",&N);
	if(N%4==0)
	{
		Increment=N+1;
		printf("%d",Increment);
	}
	else
	{
		Decrement=N-1;
		printf("%d",Decrement);
	}
	return 0;
}
