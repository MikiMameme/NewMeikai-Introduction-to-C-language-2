/* �z��̑S�v�f�̕��т𔽓]���� */
#include<stdio.h>
#define NUMBER 7						/* �z��x�̗v�f�� */

/* �v�f��n�̔z��v�̗v�f�̕��т𔽓]���� */
void rev_intary(int v[], int n)
{
	int i;
	
	for(i = 0; i < n / 2; i++) {
		int temp	= v[i];
		v[i]		=v[n - i - 1];
		v[n - i - 1] = temp;
	}
}

int main(void)
{
	int i;
	int x[NUMBER];						/* int[NUMBER]�^�̔z�� */
	
	for(i = 0; i < NUMBER; i++){		/* �v�f�ɒl��ǂݍ��� */
		printf("x[%d] :", i);
		scanf("%d", &x[i]);
	}
	
	rev_intary(x, NUMBER);				/* �v�f�ƕ��т𔽓] */

	puts("���]���܂����B");
	for(i = 0; i < NUMBER; i++)			/* �v�f�l��\�� */
		printf("x[%d] = %d\n", i, x[i]);
		
	return 0;
}