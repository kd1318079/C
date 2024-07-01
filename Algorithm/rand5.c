#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a,i;
	srand(time(0));
	rand();
	//a = rand() % 300 + 1;
	for (i = 0; i != 100; i++) {
		printf("%3d ", rand() % 300 + 1);
	}
}