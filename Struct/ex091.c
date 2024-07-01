#include<stdio.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile a;
	struct profile *p;
	p = &a;
	printf("–¼‘O‚ð“ü—Í");
	scanf("%s", p->name);
	printf("¶”NŒŽ“ú‚ð‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í");
	scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
	printf("ŒŒ‰tŒ^‚ð“ü—Í");
	scanf("%*c%s", p->blood);
	printf("%s--%d”N%dŒŽ%d“ú¶ŒŒ‰tŒ^-%sŒ^", p->name, p->birth[0], p->birth[1], p->birth[2],p->blood);
}
