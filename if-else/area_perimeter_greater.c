
//Area is greater or perimeter
#include<stdio.h>
int main()
{
	int L,B,Area,Perimeter;
	scanf("%d%d",&L,&B);
	Area=L*B;
	Perimeter=2*(L+B);
	if(Area==Perimeter)
	{
		printf("Both are equal");
	}
	else if(Area>Perimeter)
	{
		printf("Area is greater");
	}
	else
	{
		printf("Perimeter is greater");
	}
	return 0;
}

