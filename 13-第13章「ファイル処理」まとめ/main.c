/* 標準入力からの入力をファイルに書き込む */

#include<stdio.h>

int main(void)
{
	int ch;
	FILE *fp;
	char fname[FILENAME_MAX];
	
	printf("コピ-先フアイル名:");  /* ダメ文字対策 */
	scanf("%s\n", fname);
	
	if((fp = fopen(fname, "w")) == NULL)
		printf("\aコピ-先フアイルを開けませんでした。\n");
	else {
		while((ch = fgetc(stdin)) != EOF)
			fputc(ch, fp);
		fclose(fp);
	}
	return 0;
}