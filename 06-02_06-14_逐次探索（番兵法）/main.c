/* �����T���i�ԕ��@�j */
#include<stdio.h>

#define NUMBER	5
#define FAILED	-1

/* �v�f��n�̔z��v����key�ƈ�v����v�f��T���i�ԕ��@�j */
int search(int v[], int key, int n)
{
	int i = 0;
	
	v[n] = key;
	
	while (1) {
		if(v[i] == key)
		break;
	i++;
	}
	return(i < n) ? i: FAILED;
}

int main(void)
{
	int i, ky, idx;
	int vx[NUMBER +1];
	
	for(i = 0; i < NUMBER; i++){
		printf("vx[%d]:", i);
		scanf("%d", &vx[i]);
	}
	printf("�T���l :");
	scanf("%d", &ky);
	
	if((idx = search(vx, ky, NUMBER)) == FAILED)
		puts("\a�T���Ɏ��s���܂����B");
	else
		printf("%d��%d�Ԗڂɂ���܂��B\n", ky, idx + 1);
		
	return 0;
}