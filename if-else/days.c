

//NameDays                                                        
#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	if(N==0)
	{
		printf("Monday");
	}
	else if(N==1)
	{
		printf("Tuesday");
	}
	else if(N==2)
	{
		printf("Wednesday");
	}
	else if(N==3)
	{
		printf("Thursday");
	}
	else if(N==4)
	{
		printf("Friday");
	}
	else if(N==5)
	{
		printf("Saturday");
	}
	else if(N==6)
	{
		printf("Sunday");
	}
	else
	{
		printf("INVALID");
	}
	return 0;
}
