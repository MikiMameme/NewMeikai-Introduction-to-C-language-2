/* �C�ӂ̃t�@�C���̑��݂��`�F�b�N */

#include<stdio.h>

int main(void)
{
	FILE *fp;
	char fname[256];
	
	printf("�t�A�C����:");	/* �������́u�@�v�̓_�������̂��� */
	scanf("%s", fname);		/* �啶���́u�A�v�ő�p */
	
	fp = fopen(fname, "r");
	
	if(fp == NULL)
		printf("���̃t�A�C���͑��݂��܂���B\n");	/* �������́u�@�v�̓_�������̂��� */
	else {										/* �啶���́u�A�v�ő�p */
		printf("���̃t�A�C���͑��݂��܂��B\n");
		fclose(fp);
	}
	
	return 0;
}