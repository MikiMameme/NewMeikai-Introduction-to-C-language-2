/* �g���Ƒ̏d��ǂݍ���ŕ��ϒl�����߂ăt�@�C���ɏ������� */

#include<stdio.h>
#include<string.h>

#define NAME_LEN 100

int main(void)
{
	FILE *fp;
	int i;
	char name[NAME_LEN];
	double height;
	double weight;
	
	if((fp = fopen("hw.dat", "w")) == NULL)
		printf("\a�t�A�C�����J���܂���B\n");
	else {
		for(i = 0; ; i++) {
			int flag;
			printf("%d�l�ڂ̃f-�^����͂��܂����i�͂�...1 / �I��...0�j\n", i + 1);
			scanf("%d", &flag);
			if(flag == 0) break;
			
			printf("���O:"); scanf("%s", name);
			printf("�g��:"); scanf("%lf", &height);
			printf("�̏d:"); scanf("%lf", &weight);
			fprintf(fp, "%s %f %f\n", name, height, weight);
		}
		fclose(fp);
	}
	
	return 0;
}