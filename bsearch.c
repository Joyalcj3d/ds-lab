#include<stdio.h>
int bsearch(int [],int,int);
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
int m = bsearch(a,n,key);
if(m ==-1)
	printf("element not found");
else 
	printf("element found at %d ",m);
}

int bsearch(int a[],int n,int key)
{
	int top=0,bot=n-1,mid;
while(top<=bot)
{
	mid = (top+bot)/2;
	if(key>a[mid])
	{
		top=mid+1;	
	}else if(key<a[mid])
		bot=mid-1;
	else if(key==a[mid])
	{
	return (mid);
	}
}
return (-1);
}

