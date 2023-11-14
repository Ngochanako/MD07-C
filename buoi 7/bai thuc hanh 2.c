#include<stdio.h>
#include<math.h>
typedef enum{false,true} bool;


int amstrong(int num)
{
	int result=0,margin;
	int num1=num;
	while(num!=0)
	{
	 	margin=num%10;
		 result=pow(margin,3)+result;
		 num=num/10;
	}
	if(num1==result)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

int main()
{
    int num;
	for(num=100;num<1000;num++)
	{
	 	if(amstrong(num))
	 	{
	 		printf("%d\t",num);
		 }
	}	
}
