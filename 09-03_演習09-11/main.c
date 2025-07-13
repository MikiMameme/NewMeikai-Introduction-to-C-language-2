/* 文字列の配列を読み込んで表示 */

#include<stdio.h>

#define NUM 100
#define LEN 128

/* 文字列の配列を表示 */
void put_strary(const char s[][LEN], int n)
{
	int i;
	for(i = 0; i < n; i++)
		printf("s[%d] = \"%s\"\n", i, s[i]);
}

/* 文字列の配列に文字列を読み込む */
int get_strary(const char s[][LEN], int n)
{
	int i, no = n;
	
	for(i = 0; i < n; i++) {
		printf("s[%d] : ", i);
		scanf("%s", s[i]);
		if(s[i][0]=='$' && s[i][1]=='$' && s[i][2]=='$' && s[i][3]=='$' &&
			s[i][4]=='$' && s[i][5]=='\0') {
			no = i;
			break;
		}
	}
	return no;
}

int main(void)
{
	int no;
	char s[NUM][LEN];
	
	printf("%d個の文字列を入力せよ(\"$$$$$\"で中断)。\n", NUM);
	no = get_strary(s, NUM);
	
	put_strary(s, no);
	
	return 0;
}