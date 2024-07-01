#include<stdio.h>
int strcnt(char* p);
main()
{
	char buf[256];
	int mojisuu;
	printf("•¶š—ñHF");
	gets(buf);
	mojisuu = strcnt(buf);
	printf("“ü—Í‚³‚ê‚½•¶š—ñ‚Ì•¶š”‚Í%d•¶š‚Å‚·\n", mojisuu);
}

int strcnt(char* p) {
	int cnt;
	for (cnt = 0; *p != '\0'; cnt++, p++);
	return (cnt);
}