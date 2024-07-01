#include<stdio.h>
#include<string.h>
int data_a(int a[]);
int data_b(int b[]);
main()
{
	int i;
	int data[8] = { 6,10,8,2,9,5,1,7 };
	char c[256];
	printf("ƒ\[ƒg•ûŒü‚ğ“ü—Í");
	scanf("%s", &c);
	if (strcmp(c, "~‡") == 0) {
		data_a(data);
	}
	if (strcmp(c, "¸‡") == 0) {
		data_b(data);
	}
	for (i = 0; i < 8; i++) {
		printf("%d ", data[i]);
	}
}
int data_a(int a[]) {		//~‡
	int w, i;
	int j;
	for (i = 0; i < 8; i++){
		for (j = i; j < 8; j++) {
			if (a[i] < a[j]) {
				w = a[i];
				a[i] = a[j];
				a[j] = w;
			}
		}
	}
	return a[0];
}
int data_b(int b[]) {		//¸‡
	int w, i;
	int j;
	for (i = 0; i < 8; i++) {
		for (j = i; j < 8; j++) {
			if (b[i] > b[j]) {
				w = b[i];
				b[i] = b[j];
				b[j] = w;
			}
		}
	}
	return b[0];
}