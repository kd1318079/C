#include<stdio.h>
void  strbuck(char* p,char *p1);
main()
{
	char str1[256],str2[256];
	printf("•¶Žš—ñHF");
	gets(str1);
	printf("str1:%s", str1);
	strbuck(str1,str2);
	printf("\nstr2:%s", str2);
}
void strbuck(char* p, char* p1)
{
	int i,j;
	for (i = 0; *(p+i) != '\0'; i++);
	for(i--,j=0;i>=0;i--,j++){
		*(p1 + j) = *(p + i);
	}
	*(p1 + j) = '\0';
}