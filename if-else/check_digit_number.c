
//One/Two/Three/More digit no.
#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	if(N<=9)
	{
		printf("1 Digit");
	}
	else if(N>9 && N<100)
	{
		printf("2 Digit");
	}
	else if(N>99 && N<1000)
	{
		printf("3 Digit");
	}
	else
	{
		printf("More that 3 Digit");
	}
	return 0;
}
