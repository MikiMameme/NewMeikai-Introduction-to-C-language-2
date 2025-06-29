/* アラートを繰り返し発する */
#include<stdio.h>

/* 文字chをn個連続して表示 */
void put_chars(int ch, int n)
{
	while (n-- > 0)
		putchar(ch);
}

/* 文字chをn個連続して表示して改行 */
void put_chars_ln(int ch, int n)
{
	put_chars(ch, n);				/* 文字chをn個連続して表示 */
	putchar('\n');					/* 改行 */
}

/* アラートをn回連続して発する */
void alert(int n)
{
	put_chars('\a', n);				/* 警報文字をn個連続して表示 */
}

int main(void)
{
	
	int n;
	
	put_chars_ln('=', 24);			/* '='を24個表示して改行 */
	printf("警報を発する回数 :");
	scanf("%d", &n);
	put_chars_ln('-', 24);			/* '-'を24個表示して改行 */
	
	alert(n);						/* 警報をn回出力 */
	putchar('\n');
	
	put_chars_ln('=', 24);			/* '='を24個表示して改行 */
	
	return 0;
}