#include<stdio.h>

int main()
{
	float i,money,interest_rate,profit_month,money_old;
	int month;
	scanf("%f%f%d",&money,&interest_rate,&month);
	money_old=money;
	for(i=1;i<=month;i++)
	{
		profit_month=money*interest_rate/12;
		money=money+profit_month;
	}
	printf("So tien lai la: %.2f",money-money_old);
	printf("So tien nhan duoc la: %.2f",money);
	return 0;
}
