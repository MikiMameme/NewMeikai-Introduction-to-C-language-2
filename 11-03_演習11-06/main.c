/* 文字列に特定文字が含まれているかどうかを調べる関数 */

#include<stdio.h>

/* 文字列sから文字cを検索して最も先頭側の文字へポインタを返す */
const char *str_chr(const char *s, int c)
{
	while(*s) {
		if(*s == c)
			return s;
		s++;
	}
	return NULL;
}

int main(void)
{
	char str[256];
	char ch[10];
	const char *p;
	
	printf("文字列を入力してください:");
	scanf("%s", str);
	
	printf("検索する文字は:");
	scanf("%s", ch);
	
	if((p = str_chr(str, ch[0])) == NULL)
		printf("その文字は含まれていません。\n");
	else
		printf("それ以降の文字は%sです。\n", p);
		
	return 0;
}