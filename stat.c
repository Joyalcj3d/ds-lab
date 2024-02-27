#include<stdio.h>
#include<sys/stat.h>
void main()
{
	struct stat sfile;
	stat("vishalfhfhgrtfhj",&sfile);
	printf("st_mod=%o",sfile.st_mode);
}
