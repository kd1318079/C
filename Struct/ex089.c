

#include<stdio.h>
#include<string.h>
struct profile {
	char name[20];
	int bitah[3];
	char blood[5];
};
main()
{
	struct profile a;
	int i;
	printf("   O     :");
	gets(a.name);
	//strcpy(a.name,name);
	printf("   N       ؂  ē   ");
	scanf("%d%d%d", &a.bitah[0], &a.bitah[1],&a.bitah[2]);
	printf("   t ^    ́F");
	scanf("%*c%c", a.blood);
	//strcpy(a.blood, blood);
	printf("%s--%d N%d  %d        t ^-%s ^", a.name, a.bitah[0], a.bitah[1], a.bitah[2], a.blood);

}