/* 文字列と文字列の配列 */

#include<ctype.h>
#include<stdio.h>

/* 文字列sを""で囲んで表示して改行 */
#define put_str_ln(s) (put_str(s), putchar('\n'))

/* 文字列sを""で囲んで表示 */
void put_str(const char *s)
{
	putchar('\"');
	while(*s)
		putchar(*s++);
	putchar('\"');
}

/* 文字列を大文字に変換してコピー */
char *str_cpy_toupper(char *d, const char *s)
{
	char *tmp = d;
	
	while(*d++ = toupper(*s++))
		;
	return tmp;
}

int main(void)
{
	int i;
	char s[128], t[128];
	char a[] = "CIA";
	char *p = "FBI";
	char a2[][5] = {"LISP", "C", "Ada"};
	char *p2[] = {"PAUL", "X", "MAC"};
	
	printf("文字列s = ");	scanf("%s", s);
	printf("文字列に変換して配列tにコピ-しました。\n");
	printf("文字列t = %s\n", str_cpy_toupper(t,s));
	
	printf("a = ");	put_str_ln(a);
	printf("p = ");	put_str_ln(p);
	
	for(i = 0; i < sizeof(a2) / sizeof(a2[0]); i++) {
		printf("a2[%d] = ", i);	put_str_ln(a2[i]);
	}
	
	for(i = 0; i < sizeof(p2) / sizeof(p2[0]); i++) {
		printf("p2[%d] = ", i);	put_str_ln(p2[i]);
	}
}