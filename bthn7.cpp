#include<stdio.h>
#include<stdlib.h>
void nhapmang(int *a,int n);
void xuatmang(int *a,int n);
void max(int *a,int n);
void tinhtich(int *a,int n);
void ktsnt(int *a,int n);
void nhapx(int *a,int m,int n);
void sapxep(int *a,int n);
int main()
{
	int *a,n,m;
	a=(int*)calloc(25,sizeof(int));
	do
	{
    	printf("\tNhap so phan tu cua mang: ");
    	scanf("%d",&n);
    }while(n<0||n>20);
    printf("\n\tDia chi ten mang  %x \n",&a);
    printf("\n\tDia chi cua con tro phan tu dau tien %x",a);
    nhapmang(a,n);
    xuatmang(a,n);
    for(int i= 0; i < n; i++)
        printf("\n\tDia chi cua a[%d]: %x \n",i,&a[i]);
    max(a,n);
    tinhtich(a,n);
    ktsnt(a,n);
    nhapx(a,m,n);
    sapxep(a,n);
}
void nhapmang(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\n\n\tNhap phan tu thu a[%d]=",i);
		scanf("%d",&a[i]);
	}
}
void xuatmang(int *a,int n)
{
    printf("\n\tPhan tu cua mang la:");
    {
    	for(int i=0;i<n;i++)
    	    printf("  %d  .",a[i]);
	}
	printf("\n\n\t");
}
void max(int *a,int n)
{
	int max=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
		    	a[i]=max;
		    else
		        max=a[j];
		}
	}
	printf("\n\tGia tri lon nhat mang la: %d",max);
}
void tinhtich(int *a,int n)
{
	int tich=1;
	for(int i=0;i<n;i++)
	{
		tich=tich*a[i];
	}
	printf("\n\n\tTich cac phan tu trong mang la: %d",tich);
}
void ktsnt(int *a,int n)
{
	int tong=0;
	for(int i=0;i<n;i++)
	{
	int dem=0;
		for(int j=2;j<=a[i];j++)
		{
			if(a[i]%j==0)
		    	dem++;
		}
        if(dem==1)
    	printf("\n\n\tPhan tu a[%d]=%d la so nguyen to",i,a[i]);
    	
    	tong=tong+a[i];
	}
	printf("\n\n\tTong cac so nguyen to co trong mang la: %d",tong);
}
void nhapx(int *a,int m,int n)
{  int t,x=0;
	printf("\n\n\tNhap X= ");
	scanf("%d",&m);
	    for(int i=0;i<n;i++)
		{
			if(m==a[i])
			   {
			   x=a[i];
			   t=i;
			   break;
		       }
		}
			if(x!=0)
	 		   {	
			    printf("\n\tVi tri phan tu bang X la a[%d]",t);
	 		   }
	 		else 
	 		   {
	 		 	printf("\n\t%d khong ton tai",m);
			   }	
}
void sapxep(int *a,int n)
{
	int tam;
	printf("\n\n\tMang sap xep theo thu tu tang dan la: ");
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		    if(a[i]>a[j])
			{
				tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
	}	
	xuatmang(a,n);
}
