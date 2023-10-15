#include<stdio.h>
#include<conio.h>
void KTNT(int x);
void TongNT(int y);
main()
{
	int n;
	{
	do
	{
	printf("\nnhap so n=");
	scanf("%d",&n);
	}
	while(n<=0||n>=20);
	}
	KTNT(n);
    TongNT(n);
	return 0;
}
void KTNT(int x)
{
	int i;
	if(x==1)
	printf("\n%d khong phai la so nguyen to",x);
	else
	 if(x==2)
	 printf("\n%d la so nguyen to",x);
	 else
	 for(int i=2;i<x;i++)
	 if(x%i==0)
	 {
	 printf("\n%d khong phai la so nguyen to",x);
	 break;
	 }
	 else 
	 {
	 printf("\n%d la so nguyen to",x);
	 break;
     }
}
void TongNT(int y)
{
	int t=0,z,i,j;
	for(i=2; i<=y; i++)
	{
        z=0;
        for(j=2;j<i;j++)
		{
         if(i%j==0)
          z++;
        }        
        if(z==0)
         t=t+i;
    }
	  printf("\ntong cac so nguyen to la %d",t);
}
