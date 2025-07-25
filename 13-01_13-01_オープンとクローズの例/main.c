/* ファイルのオープンとクローズ */

#include<stdio.h>

int main(void)
{
	FILE *fp;
	
	fp = fopen("abc", "r");
	
	if(fp == NULL)
		printf("\aフアイル\"abc\"を開けませんでした。\n");	/* 小文字の「ァ」はダメ文字のため */
	else {															/* 大文字の「ア」で代用 */
		printf("\aフアイル\"abc\"を開きました。\n");
		fclose(fp);
	}
	return 0;
}