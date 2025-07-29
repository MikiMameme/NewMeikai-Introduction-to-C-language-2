/* double型の配列をバイナリファイルに書き込んで読み取る */

#include<stdio.h>

#define ARY_SIZE 10

int main(void)
{
	int i;
	FILE *fp;
	double a[ARY_SIZE] = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0};
	
	/* 書き込み */
	if((fp = fopen("ARRAY.bin", "wb")) == NULL)
		printf("\aフアイルを開けませんでした。\n");
	else {
		fwrite(a, sizeof(double), ARY_SIZE, fp);
		fclose(fp);
	}
	
	/* 読み取り */
	if((fp = fopen("ARRAY.bin", "rb")) == NULL)
		printf("\aフアイルを開けませんでした。\n");
	else {
		fread(a, sizeof(double), ARY_SIZE, fp);
		for(i = 0; i < ARY_SIZE; i++)
			printf("a[%d] = %.1f\n", i, a[i]);
		fclose(fp);
	}
	
	return 0;
}