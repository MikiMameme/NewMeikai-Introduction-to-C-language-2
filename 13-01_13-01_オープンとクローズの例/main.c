/* �t�@�C���̃I�[�v���ƃN���[�Y */

#include<stdio.h>

int main(void)
{
	FILE *fp;
	
	fp = fopen("abc", "r");
	
	if(fp == NULL)
		printf("\a�t�A�C��\"abc\"���J���܂���ł����B\n");	/* �������́u�@�v�̓_�������̂��� */
	else {															/* �啶���́u�A�v�ő�p */
		printf("\a�t�A�C��\"abc\"���J���܂����B\n");
		fclose(fp);
	}
	return 0;
}