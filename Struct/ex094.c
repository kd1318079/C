#include<stdio.h>
#include<string.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile a[5];
	struct profile* p[5];
	for (int i = 1; i <= 5; i++) {
		p[i] = &a[i];
		printf("%d�l��(���O):", i);
		scanf("%s", p[i]->name);
		printf("%d�l��(���N����):", i);
		scanf("%d%d%d",&p[i]->birth[0],&p[i]->birth[1],&p[i]->birth[2]);
		printf("%d�l��(���t�^):",i);
		scanf("%s",p[i]->blood);
	}
	for (int i = 1; i <= 5; i++) {
		if (strcmp(p[i]->blood,"A") == 0) {
			printf("%s--%d�N%d��%d�����܂ꌌ�t�^%s�^",p[i]->name,p[i]->birth[0], p[i]->birth[1], p[i]->birth[2], p[i]->blood);
		}
	}
}