/* ���`�T���i�����T���j */
#include<stdio.h>

#define NUMBER 5
#define FAILED -1

/* �v�f��n�̔z�񂩂�key�ƈ�v����v�f��T�� */
int search(const int v[], int key, int n)
{
	int i = 0;
	
	while(1) {
		if( i == n)
			return FAILED;
		if(v[i] == key)
			return i;
		i++;
	}
}
int main(void)
{
	int i, ky, idx;
	int vx[NUMBER];
	
	for(i = 0; i < NUMBER; i++) {
		printf("vx[%d] :", i);
		scanf("%d", &vx[i]);
	}
	printf("�T���l :");
	scanf("%d", &ky);
	
	idx = search(vx, ky, NUMBER);
	
	if(idx == FAILED)
		puts("\a�T���Ɏ��s���܂����B");
	else
		printf("%d��%d�Ԗڂɂ���܂��B\n", ky, idx + 1);
		
	return 0;
}