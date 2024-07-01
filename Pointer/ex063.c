#include<stdio.h>
main()
{
	int i=0;
	char* p_ride[3] = { "car","bus","shinkansen" };
	for(i=0;i<3;i++){
		printf("%s\n", p_ride[i]);
	}
}