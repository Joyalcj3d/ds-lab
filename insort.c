#include<stdio.h>
void insertsort(int a[],int n)
{
int key,j,i;
for(i =1;i<n;i++)
{
	key = a[i];
	j=i-1;
	while(j>=0&& a[j]>key)
	{
		a[j+1]=a[j];
		j--;		
	}

a[j+1]=key;	
}}
void main()
{
int a[10];
int n,i;
printf("enter number of elements");
scanf("%d",&n);
printf("enter elements");
for(i =0;i<n;i++)
	scanf("%d",&a[i]);
insertsort(a,n);
for(i =0;i<n;i++)
	printf("%d \t",a[i]);


}
