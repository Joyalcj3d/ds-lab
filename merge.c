#include<stdio.h>
void merge(int [],int ,int,int);
void sort(int [],int ,int);
void main()
{
int n,a[20];
printf("enter the size of array");
scanf("%d",&n);
printf("enter the elements");
for(int i=0;i<n;i++)
	scanf("%d",&a[i]);

sort(a,0,n-1);
for(int i =0;i<n;i++)
printf("%d \t",a[i]);
}

void merge(int a[],int f,int m,int e)
{
int i,j,k;
int temp[50];
for(i=f,j=m+1,k=f;i<=m,j<=e;k++)
{
	if(a[i]<=a[j])
		temp[k]=a[i++];
	else
		temp[k]=a[j++];
}
while(i<=m)
	temp[k++]=a[i++];
while(j<=e)
	temp[k++]=a[j++];
for(i=f;i<=e;i++)
	a[i]=temp[i];
}

void sort(int a[],int beg,int end)
{
	if(beg<end)
	{
		int mid=(beg+end)/2;
		sort(a,beg,mid);
		sort(a,mid+1,end);
		merge(a,beg,mid,end);	
	}
}
