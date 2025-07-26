/* 任意のファイルの存在をチェック */

#include<stdio.h>

int main(void)
{
	FILE *fp;
	char fname[256];
	
	printf("フアイル名:");	/* 小文字の「ァ」はダメ文字のため */
	scanf("%s", fname);		/* 大文字の「ア」で代用 */
	
	fp = fopen(fname, "r");
	
	if(fp == NULL)
		printf("そのフアイルは存在しません。\n");	/* 小文字の「ァ」はダメ文字のため */
	else {										/* 大文字の「ア」で代用 */
		printf("そのフアイルは存在します。\n");
		fclose(fp);
	}
	
	return 0;
}