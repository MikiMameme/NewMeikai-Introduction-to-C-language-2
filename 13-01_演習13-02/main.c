/* 任意のファイルの中身を消去 */

#include<stdio.h>

/* 中身がfilenameであるファイルの中身を消去 */
int ferase(const char *filename)
{
	FILE *fp;
	
	if((fp = fopen(filename, "w")) == NULL)		/* 書き込みモードで開く */
		return 0;
	fclose(fp);
	return 1;
}

int main(void)
{
	FILE *fp;
	char fname[256];
	
	printf("中身を消去するフアイル名:");
	scanf("%s", fname);
	
	if(ferase(fname))
		printf("そのフアイルの中身を消去しました。\n");
	else
		printf("そのフアイルの中身は消去できませんでした。\n");	/* 読み取り専用だと失敗する */
		
	return 0;
}