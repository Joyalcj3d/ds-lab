#include<stdio.h>
void sparc(int [10][3],int [10][10],int,int);
void main()
{
int a[10][10],b[10][10],d[10][10],r,c,i,j,size=0;
int triple1[10][3],triple2[10][3];
printf("enter row and column");
scanf("%d",&r);
scanf("%d",&c);
printf("enter sparse matrix");
for(i=0;i<r;i++)
	for(j=0;j<c;j++)
		scanf("%d",&a[i][j]);
for(i=0;i<r;i++)
	for(j=0;j<c;j++)
		scanf("%d",&b[i][j]);
printf("first sparce matrix");
sparc(triple1,a,r,c);
printf("second sparce matrix");
sparc(triple2,b,r,c);

}
void sparc(int triple[10][3],int b[10][10],int r,int c)
{
int i,j;
triple[0][0]=r;
triple[0][1]=c;
int h=1;
for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	{
		if(b[i][j]!=0)
		{
			triple[h][0]=i;
			triple[h][1]=j;
			triple[h][2]=b[i][j];
			h++;
		}
	}
triple[0][2]=h-1;
int k=1;
for(i=0;i<h;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d\t",triple[i][j]);
	}
printf("\n");
}	
}
