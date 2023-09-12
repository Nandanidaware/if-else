//Who is topper in 2 students
#include<stdio.h>
int main()
{
	int H,M,E,S,B,H1,M1,E1,S1,B1,Manish,Ankush;
	scanf("%d%d%d%d%d",&H,&M,&E,&S,&B);
	scanf("%d%d%d%d%d",&H1,&M1,&E1,&S1,&B1);
	Manish=H+M+E+S+B;
	Ankush=H+M+E+S+B;
	if(Manish>Ankush)
	{
		printf("%d Manish is topper",Manish);
	}
	else
	{
		printf("%d Ankush is topper",Ankush);
	}
	return 0;
}
