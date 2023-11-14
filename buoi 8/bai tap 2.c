#include<stdio.h>

int main()
{
	int n;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	//khai bao va nhap mang 
	int i,a[n],sum=0;
	for(i=0;i<n;i++)
	{
		printf("Nhap a[%d]=",i);
	    scanf("%d",&a[i]);
	}
	int length=sizeof(a)/sizeof(int);
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	printf("trung binh cong cua mang la: %.2f",(float)sum/length);
	return 0;
	
}
