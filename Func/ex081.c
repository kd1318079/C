#include<stdio.h>
int data_a(int a[]);
int data_b(int b[]);
#define data_end 8
main()
{
	int data[] = { 6,10,8,2,9,5,1,7 }, max, min;
	max = data_a(data);
	min = data_b(data);
	printf("Å‘å’l%d\tÅ¬’l%d", max, min);
}
int data_a(int a[]) {
	int max = a[0];
	for (int i = 1; i < data_end-1; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	return max;
}
int data_b(int b[]) {
	int min = b[0];
	for (int i = 1; i < data_end-1; i++) {
		if (min > b[i]) {
			min = b[i];
		}
	}
	return min;
}
