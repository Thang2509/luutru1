#include<stdio.h>
#include<conio.h>
void hoanvi(int x,int y);
int main()
{
	int a,b;
	printf("\nnhap so a=");
	scanf("%d",&a);
	printf("\nnhap so b=");
	scanf("%d",&b);
	hoanvi(a,b);
    return 0;
}
void hoanvi(int x,int y)
{
	int hv;
	hv=x;
	x=y;
	y=hv;
	printf("\nsau khi hoan vi:");
	printf("\na=%d, b=%d",x,y);
}
