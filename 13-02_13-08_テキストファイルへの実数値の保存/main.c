/* �~�����̒l���e�L�X�g�t�@�C���ɏ�������œǂݎ�� */

#include<stdio.h>

int main(void)
{
	FILE *fp;
	double pi = 3.14159265358979323846;
	
	printf("�ϐ�pi������o�����~������%23.21f�ł��B\n", pi);
	
	
	/* �������� */
	if ((fp = fopen("PI.txt", "w")) == NULL)
		printf("\a�t�A�C�����J���܂���ł����B\n");
	else {
		fprintf(fp, "%f", pi);
		fclose(fp);
	}
	
	/* �ǂݎ�� */
	if((fp = fopen("PI.txt", "r")) == NULL)
		printf("�t�A�C�����J���܂���ł����B\n");
	else {
		fscanf(fp, "%lf", &pi);
		printf("�t�A�C������ǂݎ�����~������%23.21f�ł��B\n", pi);
		fclose(fp);
	}
	
	return 0;
}