/* �z��̑S�v�f�̕��т𔽓]�������̂�ʂ̔z��Ɋi�[���� */
#include<stdio.h>

#define NUMBER 7						/* �z��x��x2�̗v�f�� */


/* �v�f��n�̔z��v2�̗v�f�ƕ��т𔽓]�������̂�v1�Ɋi�[ */
void intary_rcpy(int v1[], const int v2[], int n)
{
	int i;
	
	for(i = 0; i < n; i++)
		v1[i] = v2[n - i - 1];
}

int main(void)
{
	int i;
	int x1[NUMBER], x2[NUMBER];						/* int[NUMBER]�^�̔z�� */
	
	for(i = 0; i < NUMBER; i++){		/* �v�f�ɒl��ǂݍ��� */
		printf("x1[%d] :", i);
		scanf("%d", &x1[i]);
	}
	
	intary_rcpy(x2, x1, NUMBER);		/* �v�f�ƕ��т𔽓] */

	puts("���]�R�s-���܂����B");			/* �u�[�i�L�΂��_�j�v���_�������̂���
													�u-�i�n�C�t���j�v�ő�p���Ă��� */
	for(i = 0; i < NUMBER; i++)			/* �v�f�l��\�� */
		printf("x2[%d] = %d\n", i, x2[i]);
		
	return 0;
}