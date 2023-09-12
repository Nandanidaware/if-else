
//Percentage and grade
#include<stdio.h>
int main()
{
	int M,H,E,G,S;
	printf("ENTER THE NUMBER\n");
	scanf("%d %d %d %d %d",&M,&H,&E,&G,&S);
	float P=(float)(M+H+E+G+S)/5;
	if((P>=90) && (P<=100))
	{
		printf("Grade A");
	}
	else if((P>=80) && (P<90))
	{
		printf("Grade B");
	}
	else if((P>=70) && (P<80))
	{
		printf("Grade C");
	}
	else if((P>=60) && (P<70))
	{
		printf("Grade D");
	}
	else if((P>=40) && (P<60))
	{
		printf("Grade E");
	}
	else
	{
		printf("Grade F");
	}
	return 0;
}
