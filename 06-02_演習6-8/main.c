/* �p��̓_���Ɛ��w�̓_���̍Œ�_�����߂� */
#include<stdio.h>
#define NUMBER 5

/* �v�f��n�̔z��v�̍ŏ��l��Ԃ� */
int min_of(const int v[], int n)
{
	int i;
	int min = v[0];
	
	for(i = 1; i < n; i++)
		if(v[i] < min)
			min = v[i];
	return min;
}

int main(void)
{
	int i;
	int eng[NUMBER];
	int mat[NUMBER];
	int min_e, min_m;
	
	printf("%d�l�̓_������͂��Ă��������B\n", NUMBER);
	for(i = 0; i < NUMBER; i++) {
		printf("[%d] �p�� :", i + 1);	scanf("%d", &eng[i]);
		printf("     ���w :");			scanf("%d", &mat[i]);
	}
	min_e = min_of(eng, NUMBER);	/* �Ăяo�����ł�[]��t�����ɁA */
	min_m = min_of(mat, NUMBER);	/* �z��̖��O�����ŋL�q����B */
	
	printf("�p��̍Œ�_ =%d\n", min_e);
	printf("���w�̍Œ�_ =%d\n", min_m);
	
	return 0;
}