//End 3 print ENDS and end with 7 print 7
#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	if(N%10==3)
	{ 
		printf("End with 3");
	}
	else if(N%10==7)
	{
		printf("End with 7");
	}
	else
	{
		printf("%d",N);
	}
	return 0;
}
