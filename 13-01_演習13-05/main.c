/* �O��̃v���O�������s���̓��t�Ǝ�����\������ */

#include<stdio.h>
#include<time.h>

char data_file[] = "kibun.dat";

/* �O��̓��t�E�������擾�E�\�� */
void get_data(void)
{
	FILE *fp;
	
	if((fp = fopen(data_file, "r")) == NULL)
		printf("�{�v���O���������s����̂͏��߂Ăł��ˁB\n");
	else {
		int year, month, day, h, m, s;
		char kibun[2048];
		
		fscanf(fp, "%d%d%d%d%d%d", &year, &month, &day, &h, &m, &s);
		fscanf(fp, "%s", kibun);
		printf("�O���%d�N%d��%d��%d��%d��%d�b�ŁA�C����%s�ł����B\n",
										year, month, day, h, m, s, kibun);
		fclose(fp);
	}
}

/* ����̓��t�E�������������� */
void put_data(const char *kibun)
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
		fprintf(fp, "%s\n", kibun);
		fclose(fp);
	}
}

int main(void)
{
	char kibun[2048];
	
	get_data();
	
	printf("���݂̋C����:");
	scanf("%s", kibun);
	
	put_data(kibun);
	
	return 0;
}