/* 配列に格納されている文字列の文字の並びを反転 */

#include<stdio.h>

#define LEN 128					/* 文字列の長さ */

/* 文字列sの長さを返す */
int str_length(const char s[])
{
	int len = 0;
	while(s[len])
		len++;
	return len;
}

/* 文字列sの文字の並びを反転する */
void rev_string(char s[])
{
	int i, len = str_length(s);
	for(i = 0; i < len / 2; i++) {
		char temp = s[i];
		s[i]      = s[len-i-1];
		s[len-i-1]= temp;
	}
}

/* 文字列の配列の文字の並びを反転 */
void rev_strings(char s[][LEN], int n)
{
	int i;
	for(i = 0; i < n; i++)
		rev_string(s[i]);
}

/* 文字列の配列を表示 */
void put_strary(const char s[][LEN], int n)
{
	int i;
	for(i = 0; i < n; i++)
		printf("s[%d] = \"%s\"\n", i, s[i]);
}

int main(void)
{
	char cs[][LEN] = {"SEC", "ABC", "12345"};
	
	rev_strings(cs, 3);			/* 反転 */
	
	put_strary(cs, 3);			/* 表示 */
	
	return 0;
}