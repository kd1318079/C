#include<stdio.h>
main()
{
	int s;
	int a, b;
	printf("演算子を入力※(1 = +, 2 = -, 3 = *, 4 = / )\n");
	scanf("%d", &s);
	printf("2つの整数を入力:");
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
					printf("演算子入力時1から4の数字を入力してください");
				}
			}
		}
	}
}