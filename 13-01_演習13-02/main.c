/* �C�ӂ̃t�@�C���̒��g������ */

#include<stdio.h>

/* ���g��filename�ł���t�@�C���̒��g������ */
int ferase(const char *filename)
{
	FILE *fp;
	
	if((fp = fopen(filename, "w")) == NULL)		/* �������݃��[�h�ŊJ�� */
		return 0;
	fclose(fp);
	return 1;
}

int main(void)
{
	FILE *fp;
	char fname[256];
	
	printf("���g����������t�A�C����:");
	scanf("%s", fname);
	
	if(ferase(fname))
		printf("���̃t�A�C���̒��g���������܂����B\n");
	else
		printf("���̃t�A�C���̒��g�͏����ł��܂���ł����B\n");	/* �ǂݎ���p���Ǝ��s���� */
		
	return 0;
}