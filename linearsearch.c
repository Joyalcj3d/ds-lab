#include<stdio.h>
void arrayinput(int[],int);
void search(int [],int,int);
void main()
{
int arr[10],n,key;
printf("enter number of elements");
scanf("%d",&n);
printf("enter number to be searched");
scanf("%d",&key);
arrayinput(arr,n);
search(arr,n,key);
}
void arrayinput(int a[],int n){
for(int i=0;i<n;i++)
{
	scanf("%d",&a[i]);	
}
}

void search(int a[],int n,int key)
{
int flag=1,i;
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			flag=0;
			break;
		}		
	}
if(flag==0)
	printf("element is found at %d",i);
else
	printf("element not found");
}
