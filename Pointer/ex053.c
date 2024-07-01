#include<stdio.h>
main()
{
	int a = 100, b = 200,c;
	int *p_a,*p_b;
	
	p_a = &a;
	p_b = &b;
	printf("é¿çsëO:*p_a=%d\t*p_b=%d\n", *p_a, *p_b);
	c= *p_a;
	*p_a = *p_b;
	p_b = &c;
	printf("é¿çså„:*p_a=%d\t*p_b=%d", *p_a, *p_b);
}