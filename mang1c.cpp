#include<stdio.h>
#include<conio.h>
#include<math.h>
void nhap(),xuat(),max(),tich(),nt();
int n,i,a[50];
main()
{
	nhap();
	xuat();
	max();
	tich();
//	nt();
}
void nhap()
{
	printf("\nnhap so phan tu cua mang: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	 {
	 	printf("\nnhap phan tu a[%d]: ",i);
	 	scanf("%d",&a[i]);
	 }
}
void xuat()
{
	printf("\n mang vua nhap la: ");
	for(i=0;i<n;i++)
	 {
	 	printf("\t%d",a[i]);
	 }
}
void max()
{
	 int m;
	 printf("\ngia tri lon nhat trong mang la: ");
	 for(i=0;i<n;i++)
	  if(a[i]>m)
	   m=a[i];
	 printf("%d",m);
}
void tich()
{
    int m=1;
	 printf("\ntich cac phan tu trong mang trong mang la: ");
	 for(i=0;i<n;i++)
	 m=m*a[i];
	 printf("%d",m);
}	
/*void nt()
{
	int d=0,t=0;
	for(i=0;i<n;i++)
     if(a[i]<2)
      //break;
      else
	    for (int j=2;j<=sqrt(a[i]);j++)
        if (a[i]%i==0)
        // break;
         else
        {
         d=d+1;
	     t=t+a[i]; 
        }
    printf("\nco %d so nguyen to trong mang",d);
    printf("\ntong cac so nguyen to trong mang la:%d",t);
}
	 /* if(a[i]=1)
	   else
	    if(a[i]=2)
	    {
	    	d=d+1;
	    	t=t+a[i];
	    }
	     else 
	      for(j=2;i<a[i];j++)
	       if(a[i]%%2=0)
	        break;
	         else 
	         {
	         d=d+1;
	    	 t=t+a[i];
	    	 }
	         */
	
