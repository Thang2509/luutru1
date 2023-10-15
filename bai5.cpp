#include <stdio.h>
#include <conio.h>
int timUSCLN(int x,int y);
int main()
{
	int a,b;
	printf("\nnhap so nguyen a: ");
	scanf("%d",&a);
	printf("\nnhap so nguyen b: ");
	scanf("%d",&b);
	printf("\nuoc so chung lon nhat la:%d",timUSCLN(a,b));
}
int timUSCLN(int x,int y)
{
	int j,i,u;
	for(i=x;i>0;i--)
      {
	  if 
	  (x%i==0&&y%i==0)
	  {
	   j=i;
	   break;
	  }
	  }
	return j;
}
