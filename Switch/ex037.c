#include<stdio.h>
main()
{
	char a;
	printf("演算子を入力してください");
	scanf("%c", &a);
	switch (a)
	{
	case '+':
		printf("加算です"); break;
	case '-':
		printf("減算です"); break;
	case '*':
		printf("乗算です"); break;
	case '/':
		printf("除算です"); break;
	case '%':
		printf("あまりです"); break;
	default:
		printf("その他です"); break;
	}
}