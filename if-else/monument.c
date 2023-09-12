
//Monument of the city
#include<stdio.h>
int main()
{
	char City,Monument,Delhi,Agra,Jaipur;
	scanf("%char",&City);
	if(City==Delhi)
	{
		printf("RED FORT");
	}
	else if(City==Agra)
	{
		printf("TAJ MAHAL");
	}
	else if(City==Jaipur)
	{
		printf("JAL MAHAL");
	}
	else
	{
		printf("Invalid");
	}
	return 0;
}
