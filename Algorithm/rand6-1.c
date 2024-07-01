#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a, k;
	srand(time(0));
	rand();
	k = rand() % 3 + 1;
	printf("何をだしますか？\n1:グー 2:チョキ 3:パ－");
	scanf("%d", &a);
	if (a == k) {
		printf("あいこです");
	}} 
}