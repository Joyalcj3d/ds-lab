#include<stdio.h>
int partition(int [],int,int);
void qsort(int [],int,int);
void swap(int *a,int *b);
void main()
{
int n,a[20];
printf("enter the size of array");
scanf("%d",&n);
printf("enter the elements");
for(int i=0;i<n;i++)
	scanf("%d",&a[i]);

qsort(a,0,n-1);
for(int i =0;i<n;i++)
printf("%d \t",a[i]);
}
void swap(int *a,int *b)
{
int t;
t= *a;
*a=*b;
*b=t;
}
int partition(int a[],int start,int end)
{
	int key,i,j;
	key=a[start];
	i = start +1;
	j= end;
do
{
	while(i<j && a[i]<key)
	{
		i++;
	}
	while(j>start && a[j]>key)
	{
		j--;
	}
	if(i<j)
	{
		swap(&a[i],&a[j]);
	}	
}while(i<j);
swap(&a[start],&a[j]);
return j;
}

void qsort(int a[],int start,int end)
{
int pos;
	if(start < end)
	{
		pos = partition(a,start,end);
		qsort(a,start,pos-1);
		qsort(a,pos+1,end);
	}

}
