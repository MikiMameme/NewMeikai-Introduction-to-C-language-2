/* �p��̓_���Ɛ��w�̓_���̍ō��_�����߂� */
#include<stdio.h>
#define NUMBER 5

/* �v�f��n�̔z��v�̍ő�l��Ԃ� */
int max_of(int v[], int n)
{
	int i;
	int max = v[0];
	
	for(i = 1; i < n; i++)
		if(v[i] > max)
			max = v[i];
	return max;
}

int main(void)
{
	int i;
	int eng[NUMBER];
	int mat[NUMBER];
	int max_e, max_m;
	
	printf("%d�l�̓_������͂��Ă��������B\n", NUMBER);
	for(i = 0; i < NUMBER; i++) {
		printf("[%d] �p�� :", i + 1);	scanf("%d", &eng[i]);
		printf("     ���w :");			scanf("%d", &mat[i]);
	}
	max_e = max_of(eng, NUMBER);	/* �Ăяo�����ł�[]��t�����ɁA */
	max_m = max_of(mat, NUMBER);	/* �z��̖��O�����ŋL�q����B */
	
	printf("�p��̍ō��_ =%d\n", max_e);
	printf("���w�̍ō��_ =%d\n", max_m);
	
	return 0;
}