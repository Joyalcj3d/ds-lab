#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>
void main()
{
	if(fork()==0)
		printf("HC:hello form child \n");
	else
	{	
		printf("HP:hello from parent  \n");
		wait(NULL);
		printf("CT:child has terminated \n");
	}
	printf("end \n");
}
