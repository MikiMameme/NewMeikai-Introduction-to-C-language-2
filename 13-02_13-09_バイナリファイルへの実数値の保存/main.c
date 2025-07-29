/* 円周率の値をバイナリファイルに書き込んで読み取る */

#include<stdio.h>

int main(void)
{
	FILE *fp;
	double pi = 3.14159265358979323846;
	
	printf("変数piから取り出した円周率は%23.21fです。\n", pi);
	
	/* 書き込み */
	if((fp = fopen("PI.bin", "wb")) == NULL)
		printf("\aフアイルを開けませんでした。\n");
	else {
		fwrite(&pi, sizeof(double), 1, fp);
		fclose(fp);
	}
	
	/* 読み取り */
	if((fp = fopen("PI.bin", "rb")) == NULL)
		printf("\aフアイルを開けませんでした。");
	else {
		fread(&pi, sizeof(double), 1, fp);
		printf("フアイルから読み取った円周率は%23.21fです。\n", pi);
		fclose(fp);
	}
	
	return 0 ;
}