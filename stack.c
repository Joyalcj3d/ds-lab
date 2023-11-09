#include<stdio.h>
#define size 10
int top =0;
int s[size];

int isfull()
{
if(top >= size)
	return (1);
else
	return (-1);
}
int isempty()
{
if(top == 0)
	return (1);
else
	return (-1);
}
void push(int value)
{
if(isfull()==1)
	printf("stack full");
else
	s[top++]=value;

}
int pop()
{
if(isempty()==1)
	printf("stack is empty");
else
	{top=top-1;
	return (s[top]);
	}
}
int peek()
{
if(isempty()==1)
	printf("stack is empty");
else
	return (s[top-1]);
}
void display()
{
for(int i =0;i<top;i++)
	printf("%d  ",s[i]);
}
void main()
{
int i=0,choice,value;
do{
printf("enter 1:push,2:pop,3:peek,4:display \n");
scanf("%d",&choice);
switch(choice)
{
	case 1:
		printf("enter the value to be pushed");
		scanf("%d",&value);
		push(value);
		break;
	case 2:
		printf("element poped is %d \n",pop());
		break;
	case 3:
		printf("peek element is %d \n",peek());
		break;
	case 4:
		printf("stack : ");
		display();
}
i++;
}while(i<5);
}
