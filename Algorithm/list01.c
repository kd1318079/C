#include<stdio.h>
#include<stdlib.h>
#include<strind.h>

typedef struct NODE {
	int id;
	char name[11];
	struct NODE* pnext;
};
NODE head = { 0,"HEAD",NULL };

void show(void);
void append(int id, char* name);
void allfree(void);

main(void)
{
	append(8, "White");
	append(1, "Black");
	append(33, "Pink");
	show();

	allfree();
}

void show(void)
{
	NODE* pl;

	printf("\n-------------------------\n");
	pl = &head;
	while (pl != NULL) {
		printf("アドレスは%p IDは%-5d 名前は%-10s NEXTは%p\n",
			pl, pl->id, pl->name, pl->pnext);

	}
	return;
}

void append(int id, char* name)
{
	NODE* pnew = (NODE*)malloc(sizeof NODE);

}
