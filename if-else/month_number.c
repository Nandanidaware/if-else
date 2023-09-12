

//Month number
#include<stdio.h>
int main()
{
	int MN;
	scanf("%d",&MN);
	if(MN>0 && MN<13)
		if(MN==1)
		{
			printf("31 Days");
		}
		else if(MN==2)
		{
			printf("28 Days");
		}
		else if(MN==3)
		{
			printf("31 Days");
		}
		else if(MN==4)
		{
			printf("30 Days");
		}
		else if(MN==5)
		{
			printf("31 Days");
		}	
		else if(MN==6)
		{
			printf("30 Days");
		}
		else if(MN==7)
		{
			printf("31 Days");
		}
		else if(MN==8)
		{
			printf("30 Days");
		}
		
		else if(MN==9)
		{			
			printf("31 Days");
		}	
		else if(MN==10)
		{
			printf("30 Days");
		}
		else if(MN==11)
		{
			printf("30 Days");
		}
		
		else if(MN==12)
		{
			printf("31 Days");
		}
		return 0;
}
