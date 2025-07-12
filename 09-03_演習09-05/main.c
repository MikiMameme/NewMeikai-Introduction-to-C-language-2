/* 文字列に特定文字が含まれているかどうかを調べる関数 */

#include<stdio.h>

/* 文字列sの中に最も先頭に位置する文字cを探索 */
int str_char(const char s[], int c)
{
	int i;
	
	for(i = 0; s[i] != '\0'; i++)
		if(s[i] == c)
			return i;
	return -1;
}
int main(void)
{
	int no;
	char ch[10];
	
	printf("英文字を入力してください:");
	scanf("%s", ch);
	
	no = str_char("ABCDEFGHIJKLMNOPQRSTUVWXYZ"
				  "abcdefghijklmnopqrstuvwxyz", ch[0]);
				  
	if(no >= 0 && no <= 25)
		printf("それは英大文字の%d番目です。\n", no + 1);
	else if(no >= 26 && no <= 51)
		printf("それは英小文字の%d番目です。\n", no - 25);
	else
		printf("それは英文字ではありません。\n");
		
		return 0;
}