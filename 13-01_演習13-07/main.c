/* ファイル中の数字文字の個数をカウントする */

#include<stdio.h>

int main(void)
{
	int i, ch;
	FILE *fp;
	char fname[FILENAME_MAX];
	int cnt[10] = {0};
	
	printf("フアイル名:");
	scanf("%s", fname);
	
	if((fp = fopen(fname, "r")) == NULL)
		printf("\aフアイルを開けませんでした。\n");
	else {
		while((ch = fgetc(fp)) != EOF)
		if(ch >= '0' && ch <= '9')
			cnt[ch - '0']++;
		fclose(fp);
		
		puts("数字文字の出現回数");
		for(i = 0; i < 10; i++)
			printf("'%d' : %d\n", i, cnt[i]);
	}
	return 0;
}