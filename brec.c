#include<stdio.h>
int bsearch(int [],int,int,int);
void main()
{
int a[20];
int n,i,key;
printf("enter number of elements");
scanf("%d",&n);
printf("enter elements");
for(i =0;i<n;i++)
	scanf("%d",&a[i]);
printf("enter number to be searched");
scanf("%d",&key);
int m = bsearch(a,0,n-1,key);
if(m == -1)
	printf("element not found");
else 
	printf("element found at %d ",m);
}

int bsearch(int a[],int top,int bot,int key)
{
int mid =(top +bot)/2;
if(a[mid]==key)
	return mid;
else if(a[mid]>key)
	bsearch(a,0,mid-1,key);
else if(a[mid]<key)
	bsearch(a,mid+1,bot,key);
}

