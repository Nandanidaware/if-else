//Bonus Employee
#include<stdio.h>
int main()
{
	int Salary,Bonus,NetBonus,Year;
	scanf("%d%d",&Salary,&Year);
	if(Year>5)
	{
		Bonus=(Salary*5)/100;
		NetBonus=Salary+Bonus;
		printf("%d",NetBonus);	
	}
	else
	{
		printf("%d",Salary);
	}
	return 0;	
}
