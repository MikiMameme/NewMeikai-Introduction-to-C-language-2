/* �������p�̒��p�񓙕ӎO�p�`��\���i�֐��Łj */
#include<stdio.h>

/* �L������"*"��n�A�����ĕ\��*/
void put_status(int n)
{
	while(n-- > 0)
		putchar('*');
}

int main(void)
{
	int i, len;
	
	printf("�������p�񓙕ӎO�p�`�����܂��B\n");
	printf("�Z�� :");
	scanf("%d", &len);
	
	for(i = 1; i <= len; i++){
		put_status(i);
		putchar('\n');
	}
	return 0;
}