/* 文字列の配列を読み込んで表示 */

#include<stdio.h>

#define NUM 10

int main(void)
{
	int i, no;
	char s[NUM][128];
	
	no = NUM;
	printf("%d個の文字列を入力せよ （\"$$$$$\"で中断）。\n", NUM);
	for(i = 0; i < NUM; i++) {
		printf("s[%d]:", i);
		scanf("%s", s[i]);
		if(s[i][0]=='$' && s[i][1]=='$' && s[i][2]=='$' && s[i][3]=='$' &&
		  s[i][4]=='$' && s[i][5]=='\0') {
		  no = i;
		  break;
		}
	}
	for(i = 0; i < no; i++)
		printf("s[%d] = \"%s\"\n", i, s[i]);
		
		return 0;
}