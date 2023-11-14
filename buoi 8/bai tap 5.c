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
	//khai bao va nhap gia tri updateValue va updateIndex
	int addValue,addIndex;
	printf("Nhap gia tri addValue: ");
	scanf("%d",&addValue);
	printf("Nhap gia tri addIndex: ");
	scanf("%d",&addIndex);
	//tim va cap nhap gia tri phan tu cua mang
	arr[addIndex]=addValue;
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
