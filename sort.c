#include<stdio.h>
void arrayinput(int[],int);
void sort(int [],int);
void swap(int * , int *);
void printarr(int [],int);
void selsort(int [],int);
void main()
{
int arr[10],n,key;
printf("enter number of elements");
scanf("%d",&n);
arrayinput(arr,n);
printf("1 for selection sort 2 for bubble sort");
int ch;
scanf("%d",&ch);
if(ch==1)
	selsort(arr,n);
else if(ch == 2)
	sort(arr,n);
sort(arr,n);
}
void arrayinput(int a[],int n){
for(int i=0;i<n;i++)
{
	scanf("%d",&a[i]);	
}
}

void sort(int a[],int n)
{
int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
		if(a[j]>a[j+1])
		{
			swap(&a[j],&a[j+1]);
		}
		}		
	}
printarr(a,n);
}
void selsort(int a[],int n)
{
int lar,i,index,j;
for(i=0;i<n-1;i++)
{
	for(j=0;j<n-i;j++)
	{
		if(a[j]>lar)
		{
			index= i;
			lar = a[j];			
		}
				
	}
	swap(&a[index],&a[n-i]);	
}

}
void swap(int *a,int *b)
{
int t;
t= *a;
*a=*b;
*b=t;
}
void printarr(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d \t",a[i]);
	}	
}
