/* double�^�̔z����o�C�i���t�@�C���ɏ�������œǂݎ�� */

#include<stdio.h>

#define ARY_SIZE 10

int main(void)
{
	int i;
	FILE *fp;
	double a[ARY_SIZE] = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0};
	
	/* �������� */
	if((fp = fopen("ARRAY.bin", "wb")) == NULL)
		printf("\a�t�A�C�����J���܂���ł����B\n");
	else {
		fwrite(a, sizeof(double), ARY_SIZE, fp);
		fclose(fp);
	}
	
	/* �ǂݎ�� */
	if((fp = fopen("ARRAY.bin", "rb")) == NULL)
		printf("\a�t�A�C�����J���܂���ł����B\n");
	else {
		fread(a, sizeof(double), ARY_SIZE, fp);
		for(i = 0; i < ARY_SIZE; i++)
			printf("a[%d] = %.1f\n", i, a[i]);
		fclose(fp);
	}
	
	return 0;
}