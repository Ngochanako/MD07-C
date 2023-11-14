#include<stdio.h>

int main()
{
	int i,n,a[n];
	printf("Nhap so n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Nhap a[%d]",i);
		scanf("%d",&a[i]);
	}
	int min=a[0];
	int max=a[0];
	for(i=1;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("So lon nhat la: %d. So nho nhat la: %d",max,min);
	return 0;
}
