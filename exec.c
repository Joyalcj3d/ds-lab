#include<unistd.h>
void main(void)
{
	char *BinaryPath="/bin/ls";
	char *arg1="-1";
	char *arg2="/home/mca/vishal/a";
	execl(BinaryPath,BinaryPath,arg1,arg2,NULL);
	
}
