/* �v���O���������s�������t�E�������t�@�C���ɏ����o�� */

#include<stdio.h>
#include<time.h>

int main(void)
{
	FILE *fp;
	time_t current = time(NULL);
	struct tm *timer = localtime(&current);
	
	if((fp = fopen("dt_dat", "w")) == NULL)
		printf("\a�t�A�C�����J���܂���\n");
	
	else {
		
		printf("���݂̓��t�E�����������o���܂����B\n");
		fprintf(fp, "%d %d %d %d %d %d\n",
			timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday,
			timer->tm_hour,        timer->tm_min,     timer->tm_sec );
			fclose(fp);
	}
	
	return 0;
}