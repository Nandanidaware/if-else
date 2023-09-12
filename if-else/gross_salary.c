
//Gross Salary
#include<stdio.h>
int main()
{
	int BS,GS,DA,HRA;
	scanf("%d",&BS);
	if(BS<=10000)
	{
		HRA=(BS*20)/100;
		DA=(BS*80)/100;
		GS=HRA+BS+DA;
		printf("%d",GS);
	}
	else if(BS<=20000)
	{
		HRA=(BS*25)/100;
		DA=(BS*90)/100;
		GS=HRA+BS+DA;
		printf("%d",GS);
	}
	else if(BS>20000)
	{
		HRA=(BS*30)/100;
		DA=(BS*95)/100;
		GS=HRA+BS+DA;
		printf("%d",GS);
	}
	else
	{
		printf("%d",BS);
	}
	return 0;
}
