/* �|�C���^�ɂ���Đg�����ԐړI�ɑ��삷�� */

#include<stdio.h>

/* �Ђ�q����i180cm�����̐g����180cm�ɐL�΂��j */
void hiroko(int *height)
{
	if(*height < 180)
		*height = 180;
}

int main(void)
{
	int sato   = 178;
	int sanaka = 175;
	int masaki = 179;
	
	hiroko(&masaki);
	
	printf("�����N�̐g��;%d\n", sato);
	printf("�����N�̐g��:%d\n", sanaka);
	printf("�^��N�̐g��:%d\n", masaki);
	
	return 0;
}