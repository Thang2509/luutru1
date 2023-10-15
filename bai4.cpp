#include <stdio.h>
int tinhdthcn(int x,int y);
int main()
{
	int a,b;
	printf("\n nhap chieu dai: ");
	scanf("%d",&a);
	printf("\n nhap chieu rong: ");
	scanf("%d",&b);
	printf("\n dien tich hinh chu nhat la:%d",tinhdthcn(a,b));
}
int tinhdthcn(int x,int y)
{
	int t;
	t=x*y;
return t;
}

