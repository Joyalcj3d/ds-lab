#include<stdio.h>
#define size 10
int top =0;
char s[size];

int isfull()
{
if(top >= size)
	return (1);
else
	return (0);
}
int isempty()
{
if(top == 0)
	return (1);
else
	return (0);
}
void push(int value)
{
if(isfull()==1)
	printf("stack full");
else
	s[top++]=value;

}
char pop()
{
if(isempty()==1)
	printf("stack is empty");
else
	{top=top-1;
	return (s[top]);
	}
}

void main()
{
char a[20];
printf("enter string");
scanf("%s",a);
for(int i=0;a[i]!='\0';i++)
	push(a[i]);
printf("reversed string :\n");
while(!isempty())
{
	char sd=pop();
	printf("%c",sd);
}
}
