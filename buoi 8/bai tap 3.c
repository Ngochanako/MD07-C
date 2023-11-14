#include<stdio.h>

int main()
{
	int n;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	int arr[n],i,sum=0;
	for(i=0;i<n;i++)
	{
		printf("Nhap arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	//khai bao va nhap so findNumber
	int findNumber;
	printf("Nhap so findNumber:");
	scanf("%d",&findNumber);
	for(i=0;i<n;i++)
	{
		if(arr[i]==findNumber)
		{
			printf("Phan tu co chi so %d bang findNumber",i);
			sum+=arr[i];
		}
	}
	if(sum==0)
	{
		printf("Khong co phan tu nao bang findNUmber");
	}
	else printf("Tong cac so bang findNumber la %d",sum);
}
