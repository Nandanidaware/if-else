//15 to 20 sum it will return
#include<stdio.h>
int main()
{
	int A,B,Sum;
	scanf("%d%d",&A,&B);
	Sum=A+B;
	if(Sum>15 && Sum<20)
	{
		printf("20\n");
	}
	else
	{
		printf("%d\n",Sum);
	}
	return 0;
}
