/* 配列に文字列を格納して表示 */

#include<stdio.h>

int main(void)
{
	char str[] = "ABC\0DEF";
	
	printf("文字列strは\"%s\"です。\n", str);
	
	return 0;
}