#include <stdio.h>
#include <conio.h>
long giaithua(int t);
int main()
{
	int n,t;
	printf("\n nhap so can tinh giai thua: ");
	scanf("%d",&n);
	printf("\n giai thua cua %d la: %d",n,giaithua(n));

}

long giaithua(int t)
{
	 int gt,i;
	 gt=1;
	 for(i=1;i<=t;i++)
	 {
	  gt=gt*i;
	 }
	 
	 return(gt);
}
