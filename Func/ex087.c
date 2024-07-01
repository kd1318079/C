#include<stdio.h>
#include<stdlib.h>
main(int argc, char* argv[])
{
	int num1,num2;
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	
	printf("%d+%d=%d",num1,num2,num1+num2);
	
}