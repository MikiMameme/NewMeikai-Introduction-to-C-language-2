/* 文字列を表示・文字列に含まれる特定文字の個数を調べる */

#include<stdio.h>

/* 文字列aを表示（改行文字は出力しない） */
void put_string(const char *s)
{
	while(*s)
		putchar(*s++);
}
/* 文字列sの中の文字cの個数を返す */
int str_chnum(const char *s, int c)
{
	int count = 0;
	
	while(*s)
		if(*s++ == c)
			count++;
	return count;
}

int main(void)
{
	char str[256];
	char ch[10];
	
	printf("文字列を入力をしてください:");
	scanf("%s", str);
	
	put_string(str);
	printf("からカウントするのは:");
	scanf("%s", ch);
	
	printf("その文字は%d個含まれています。\n", str_chnum(str, ch[0]));
	
	return 0;
}