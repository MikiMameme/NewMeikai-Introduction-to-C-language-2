/* 文字列をコピーする */

#include<stdio.h>

/* 文字列sをdにコピーする */
char *str_copy(char *d, const char *s)
{
	char *t = d;
	
	while(*d++ = *s++)
		;
	return t;
}
int main(void)
{
	char str[128] = "ABC";
	char tmp[128];
	
	printf("str = \"%s\"\n", str);
	
	printf("コピ-するのは:", tmp);
	scanf("%s", tmp);
	
	str_copy(str, tmp);
	
	puts("コピ-しました。");
	printf("str = \"%s\"\n", str);
	
	return 0;
}