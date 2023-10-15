#include<stdio.h>
#include<conio.h>
int kiemtraSNT(int n);
int main()
{ int n;
	printf("\n nhap so n= ");
	scanf("%d",&n);
	//kiemtraSNT(n);
	if(kiemtraSNT(n)==1)
	 printf("\n%d la so nguyen to",n);
	 else 
	 printf("\n%d khong la so nguyen to",n);
}
 
int kiemtraSNT(int n)
{
	int j=1;
	if(n==1)
	 	j=0;
	 else
	 {
    for(int i=2;i<n;i++)
	if(n%i==0)
	j=0;
    }
	  return(j);
}
