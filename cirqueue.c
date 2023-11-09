#include<stdio.h>
#define size 3
int f=-1;
int r=-1;
int q[size];

int isfull()
{
if(f==(r+1)%size)
	return (1);
else 
	return (0);
}
int isempty()
{
if(f==-1)
	return (1);
else 
	return (0);
}
void enqueue(int value)
{
if(isfull())
	printf("queue is full");
else if(isempty())
{
	f=0;
	r=0;
}else
	r=(r+1)%size;
	q[r]=value;

}
int dequeue()
{
if(isempty())
	printf("queue is empty");
else{
	int value =q[f];
	if(f==r)
	{
		f=-1;
		r=-1;
	}else{
		f=(f+1)%size;
	}
	return (value);
}
}

void display()
{
for(int i=f;i!=r;i=(i+1)%size)
	printf("%d  ",q[i]);
printf("%d",q[i]);
}
void main()
{
int i=0,choice,value;
do{
printf("enter 1:enqueue,2:dequeue,3:display \n");
scanf("%d",&choice);
switch(choice)
{
	case 1:
		printf("enter the value to be pushed");
		scanf("%d",&value);
		enqueue(value);
		break;
	case 2:
		printf("element poped is %d \n",dequeue());
		break;
	case 3:
		printf("stack : ");
		display();
}
i++;
}while(!isempty());
}
