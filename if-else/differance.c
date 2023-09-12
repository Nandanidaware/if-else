
//Print differance if number is greater
#include<stdio.h>
int main()
{
	int A,B,Diff,Sum;
	scanf("%d%d",&A,&B);
	if(A>B)
	{
		Diff=A-B;
		printf("%d",Diff);
	}
	else
	{
		Sum=A+B;
		printf("%d",Sum);
	}
	return 0;
}
