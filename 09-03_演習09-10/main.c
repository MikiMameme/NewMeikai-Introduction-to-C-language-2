/* 文字列中の文字数字を削除する */

#include<stdio.h>

/* 文字列s中の数字文字を削除する */
void del_digit(char s[])
{
	int i = 0, idx = 0;
	
	while(s[i]) {
		if(s[i] < '0' || s[i] > '9')	/* 数字文字でなければ */
			s[idx++] = s[i];
		i++;
	}
	s[idx] = '\0';
}

int main(void)
{
	char str[256];
	
	printf("文字列を入力してください:");
	scanf("%s", str);
	
	del_digit(str);						/* 文字列内の文字数字を削除 */
	
	puts("文字数字を削除しました。");
	printf("str=%s\n", str);
	
	return 0;
}