#include<stdio.h>
int ketugou(char *p ,int i);
main()
{
	int mozisuu;
	int i = 0;
	char a[256], b[256];

	printf("�z��a=");
	scanf("%s", &a);
	printf("�z��b=");
	scanf("%s", &b);
	mozisuu = ketugou(a,i);
	for (i = 0; b[i] != '\0'; i++) {
		a[mozisuu + i] = b[i];
	}
	a[mozisuu + i] = '\0';
	printf("�z��a=%s", a);
	
}
int ketugou(char *p,int i) {
	for (i = 0; *(p + i) != '\0'; i++);
	return i;
}