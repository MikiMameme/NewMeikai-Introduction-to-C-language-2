/* �W�����͂Ɍ��ꂽ���s�̐���\������ */

#include<stdio.h>

int main(void)
{
	int ch;
	int n_count = 0;
	
	while((ch = getchar()) != EOF)
		if(ch == '\n')
			n_count++;
			
	printf("�s��:%d\n", n_count);
	
	return 0;
}