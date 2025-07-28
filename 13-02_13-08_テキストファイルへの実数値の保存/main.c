/* 円周率の値をテキストファイルに書き込んで読み取る */

#include<stdio.h>

int main(void)
{
	FILE *fp;
	double pi = 3.14159265358979323846;
	
	printf("変数piから取り出した円周率は%23.21fです。\n", pi);
	
	
	/* 書き込み */
	if ((fp = fopen("PI.txt", "w")) == NULL)
		printf("\aフアイルを開けませんでした。\n");
	else {
		fprintf(fp, "%f", pi);
		fclose(fp);
	}
	
	/* 読み取り */
	if((fp = fopen("PI.txt", "r")) == NULL)
		printf("フアイルを開けませんでした。\n");
	else {
		fscanf(fp, "%lf", &pi);
		printf("フアイルから読み取った円周率は%23.21fです。\n", pi);
		fclose(fp);
	}
	
	return 0;
}