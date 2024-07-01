#include<stdio.h>
main()
{
	char* p = "peach";
	char data1[10] = "banana", * p_data1;
	char data2[10], * p_data2;
	p_data1 = data1;
	p_data2 = data2;
	printf("data1[]");
	while (*p_data1) {
		*p_data2++ = *p_data1++;
	}
	p_data1 = data1;
	while (*p_data1) {
		*p_data1 = *p++;
		putchar(*p_data1++);
	}
	p_data2 = data2;
	printf("\ndata2[]");
	while (*p_data2) {
		putchar(*p_data2++);
	}
}