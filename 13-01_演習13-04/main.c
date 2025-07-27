/* 身長と体重を読み込んで平均値を求めてファイルに書き込む */

#include<stdio.h>
#include<string.h>

#define NAME_LEN 100

int main(void)
{
	FILE *fp;
	int i;
	char name[NAME_LEN];
	double height;
	double weight;
	
	if((fp = fopen("hw.dat", "w")) == NULL)
		printf("\aフアイルを開けません。\n");
	else {
		for(i = 0; ; i++) {
			int flag;
			printf("%d人目のデ-タを入力しますか（はい...1 / 終了...0）\n", i + 1);
			scanf("%d", &flag);
			if(flag == 0) break;
			
			printf("名前:"); scanf("%s", name);
			printf("身長:"); scanf("%lf", &height);
			printf("体重:"); scanf("%lf", &weight);
			fprintf(fp, "%s %f %f\n", name, height, weight);
		}
		fclose(fp);
	}
	
	return 0;
}