#include <stdio.h>
int tinhtong(int x,int y);
int main()
{
	int a,b;
	printf("\n nhap so nguyen a: ");
	scanf("%d",&a);
	printf("\n nhap so nguyen b: ");
	scanf("%d",&b);
	printf("\n tong la:%d",tinhtong(a,b));
}
int tinhtong(int x,int y)
{
	int t;
	t=x+y;
return t;
}

