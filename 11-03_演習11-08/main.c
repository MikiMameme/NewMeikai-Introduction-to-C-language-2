/* 文字列中の数字文字を削除する */

#include<stdio.h>

/* 文字列str中の数字文字を削除する */
void del_digit(char *str)
{
	char *ptr = str;
	
	while(*str) {
		if(*str < '0' || *str > '9')
			*ptr++ = *str;
		str++;
	}
	*ptr = '\0';
}

int main(void)
{
	char str[256];
	
	printf("文字列を入力してください:");
	scanf("%s", str);
	
	del_digit(str);
	
	puts("文字数字を削除しました。");
	printf("str=%s\n", str);
	
	return 0;
}