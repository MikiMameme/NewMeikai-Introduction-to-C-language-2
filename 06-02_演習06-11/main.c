/* �z�񒆂̂���l�����S�v�f�̓Y���𒊏o */
#include<stdio.h>

#define NUMBER 7
#define FAILED -1

/* �v�f��n�̔z��v����l��key�̑S�v�f�̓Y����idx�Ɋi�[���Č���ԋp */
int search_idx(const int v[], int idx[], int key, int n)
{
	int i, count = 0;
	
	for (i = 0; i < n; i++){
		if (v[i] == key)
			idx[count++] = i;
			
	}
	return count;
}
int main(void)
{
	int i, ky, num;
	int vx[NUMBER];
	int pt[NUMBER];
	
	for(i = 0; i < NUMBER; i++){
		printf("vx[%d]:", i);
		scanf("%d", &vx[i]);
	}
	printf("�T���l :");
	scanf("%d", &ky);

	if((num = search_idx(vx, pt, ky, NUMBER)) == 0)
		puts("\a���̒l�͊܂܂�܂���B");
	else{
		printf("%d��%d�܂܂�܂��B\n", ky, num);
		for(i = 0; i < num; i++)
			printf("vx[%d], = %d\n", pt[i], vx[pt[i]]);
	}
	return 0;
	}