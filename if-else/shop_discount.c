//shop will give discount
#include<stdio.h>
int main()
{
	int Q,TC,D;
	scanf("%d",&Q);
	TC=100*Q;
	if(TC>=1000)
	{
		float D=(float)(10*TC)/100;
		printf("%.2f",D);
	}
	else
	{
		printf("%d",TC);
	}
