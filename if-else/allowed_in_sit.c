//Allowed to sit in exam or not
#include<stdio.h>
int main()
{
	int X,Y;
	scanf("%d %d",&X,&Y);
	float A=(X*100)/Y;
	if(A<75)
	{
		printf("Not allowed to sit in exam");
	}
	else
	{
		printf("Allowed to sit in exam");
	}
	return 0;
}
