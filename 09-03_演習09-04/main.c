/* 文字列を空文字にする関数 */

#include<stdio.h>

/* 文字列sを空文字列にする */
void null_string(char s[])
{
	s[0] = '\0';
}

int main(void)
{
	char str[128];
	
	printf("文字列を入力してください:");
	scanf("%s", str);
	
	printf("文字列strは\"%s\"です。\n", str);
	null_string(str);
	printf("文字列strは空文字\"%s\"にしました。\n", str);
	
	return 0;
}