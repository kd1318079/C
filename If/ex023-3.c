#include<stdio.h>
main()
{
	int s;
	int a, b;
	printf("���Z�q����́�(1 = +, 2 = -, 3 = *, 4 = / )\n");
	scanf("%d", &s);
	printf("2�̐��������:");
	scanf("%d%d", &a,&b);
	if (s== 1) {
		printf("%d", a + b);
	}
	else {
		if (s == 2) {
			printf("%d", a - b);
		}
		else {
			if (s == 3) {
				printf("%d", a * b);
			}
			else{
				if (s == 4) {
					printf("%d", a / b);
				}
				else {
					printf("���Z�q���͎�1����4�̐�������͂��Ă�������");
				}
			}
		}
	}
}