/* ファイル中の改行文字の個数をカウントする */

#include<stdio.h>

int main(void)
{
	int ch;
	FILE *fp;
	char fname[FILENAME_MAX];
	int n_count = 0;
	
	printf("フアイル名:");
	scanf("%s", fname);
	
	if((fp = fopen(fname, "r")) == NULL)
		printf("\aフアイルを開けませんでした。\n");
	else {
		while((ch = fgetc(fp)) != EOF)
		if(ch == '\n')
			n_count++;
		fclose(fp);
		
		printf("そのフアイルは%d行です。\n", n_count);
	}
	return 0;
}