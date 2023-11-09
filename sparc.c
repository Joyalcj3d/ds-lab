#include<stdio.h>
void main()
{
int a[10][10],r,c,i,j,size=0;
printf("enter row and column");
scanf("%d",&r);
scanf("%d",&c);
printf("enter sparse matrix");
for(i=0;i<r;i++)
	for(j=0;j<c;j++)
		scanf("%d",&a[i][j]);
for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	{
		if(a[i][j]!=0)
			size++;
	}
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
		printf("%d\t",a[i][j]);
printf("\n");
}
int triple[size][3];
triple[0][0]=r;
triple[0][1]=c;
triple[0][2]=size;
int k=1;
for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	{
		if(a[i][j]!=0)
		{
			triple[k][0]=i;
			triple[k][1]=j;
			triple[k][2]=a[i][j];
			k++;
		}
	}
printf("triple matrix \n");
for(i=0;i<k;i++)
{
	for(j=0;j<3;j++)
		printf("%d\t",triple[i][j]);
printf("\n");
}
}

