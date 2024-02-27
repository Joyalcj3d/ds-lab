#include<stdio.h>
#include<dirent.h>
#include<stdlib.h>
struct dirent *diptr;
int main(int argc ,char *argv[])
{
	char buff[100];
	DIR *dirp;
	printf("enter directory name");
	scanf("%s",buff);
	if((dirp=opendir(buff))==NULL)
	{
		printf("the given directory does not exist");
		exit(1);
	}
	while(diptr=readdir(dirp))
		printf("%s",diptr->d_name);
	closedir(dirp);

}
