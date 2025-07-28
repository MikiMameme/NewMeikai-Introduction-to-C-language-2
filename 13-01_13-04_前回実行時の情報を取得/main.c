/* �O��̃v���O�������s���̓��t�Ǝ�����\������ */

#include<stdio.h>
#include<time.h>

char data_file[] = "datetime.dat";

/* �O��̓��t�E�������擾�E�\�� */
void get_data(void)
{
	FILE *fp;
	
	if((fp = fopen(data_file, "r")) == NULL)
		printf("�{�v���O���������s����̂͏��߂Ăł��ˁB\n");
	else {
		int year, month, day, h, m, s;
		
		fscanf(fp, "%d%d%d%d%d%d", &year, &month, &day, &h, &m, &s);
		printf("�O���%d�N%d��%d��%d��%d��%d�b�ł����B\n",
										year, month, day, h, m, s);
		fclose(fp);
	}
}

/* ����̓��t�E�������������� */
void put_data(void)
{
	FILE *fp;
	time_t current = time(NULL);
	struct tm *timer = localtime(&current);
	
	if((fp = fopen(data_file, "w")) == NULL)
		printf("\a�t�A�C�����J���܂���B\n");
	else {
		fprintf(fp, "%d %d %d %d %d %d\n",
				timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday,
				timer->tm_hour,			timer->tm_min,		timer->tm_sec);
		fclose(fp);
	}
}

int main(void)
{
	get_data();
	put_data();
	
	return 0;
}