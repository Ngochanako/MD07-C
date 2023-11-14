#include<stdio.h>

int main()
{
	//khai bao va nhap mang gom n phan tu
	int n;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		printf("Nhap arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	//khai bao va nhap gia tri addValue va addIndex
	int addValue,addIndex;
	printf("Nhap gia tri addValue: ");
	scanf("%d",&addValue);
	printf("Nhap gia tri addIndex: ");
	scanf("%d",&addIndex);
	//khai bao mang moi gom n+1 phan tu
	int new_arr[n+1];
	//chuyen phan tu mang cu sang mang moi
	for(i=0;i<addIndex;i++)
	{
		new_arr[i]=arr[i];
	}
	for(i=addIndex+1;i<n+1;i++)
	{
		new_arr[i]=arr[i-1];
	}
	new_arr[addIndex]=addValue;
	for(i=0;i<n+1;i++)
	{
		printf("%d\t",new_arr[i]);
	}
	return 0;	
}
