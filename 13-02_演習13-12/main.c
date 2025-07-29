/* �O��̃v���O�������s���̓��t�Ǝ�����\������ */

#include<stdio.h>
#include<time.h>

char data_file[] = "datetime.dat";

/* �O��̓��t�E�������擾�E�\�� */
void get_data(void)
{
	FILE *fp;
	struct tm local;
	
	if((fp = fopen(data_file, "rb")) == NULL)
		printf("�{�v���O���������s����̂͏��߂Ăł��ˁB\n");
	else {
		fread(&local, sizeof(struct tm), 1, fp);
		printf("�O���%d�N%d��%d��%d��%d��%d�b�ł����B\n",
				local.tm_year + 1900, local.tm_mon + 1, local.tm_mday,
				local.tm_hour,		local.tm_min,	local.tm_sec);
		fclose(fp);
	}
}

/* ����̓��t�E�������������� */
void put_data(void)
{
	FILE *fp;
	time_t current = time(NULL);
	struct tm *timer = localtime(&current);
	
	if((fp = fopen(data_file, "wb")) == NULL)
		printf("\a�t�A�C�����J���܂���B\n");
	else {
		fwrite(timer, sizeof(struct tm), 1, fp);
		fclose(fp);
	}
}

int main(void)
{
	get_data();
	put_data();
	
	return 0;
}