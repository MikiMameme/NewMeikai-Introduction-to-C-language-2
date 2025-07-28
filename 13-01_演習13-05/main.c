/* 前回のプログラム実行時の日付と時刻を表示する */

#include<stdio.h>
#include<time.h>

char data_file[] = "kibun.dat";

/* 前回の日付・時刻を取得・表示 */
void get_data(void)
{
	FILE *fp;
	
	if((fp = fopen(data_file, "r")) == NULL)
		printf("本プログラムを実行するのは初めてですね。\n");
	else {
		int year, month, day, h, m, s;
		char kibun[2048];
		
		fscanf(fp, "%d%d%d%d%d%d", &year, &month, &day, &h, &m, &s);
		fscanf(fp, "%s", kibun);
		printf("前回は%d年%d月%d日%d時%d分%d秒で、気分は%sでした。\n",
										year, month, day, h, m, s, kibun);
		fclose(fp);
	}
}

/* 今回の日付・時刻を書き込む */
void put_data(const char *kibun)
{
	FILE *fp;
	time_t current = time(NULL);
	struct tm *timer = localtime(&current);
	
	if((fp = fopen(data_file, "w")) == NULL)
		printf("\aフアイルを開けません。\n");
	else {
		fprintf(fp, "%d %d %d %d %d %d\n",
				timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday,
				timer->tm_hour,			timer->tm_min,		timer->tm_sec);
		fprintf(fp, "%s\n", kibun);
		fclose(fp);
	}
}

int main(void)
{
	char kibun[2048];
	
	get_data();
	
	printf("現在の気分は:");
	scanf("%s", kibun);
	
	put_data(kibun);
	
	return 0;
}