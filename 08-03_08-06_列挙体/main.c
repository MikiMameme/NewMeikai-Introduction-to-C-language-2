/* �I�΂ꂽ�����̖�����\�� */

#include<stdio.h>

enum animal { Dog, Cat, Monkey, Invalid };

/* ������ */
void dog(void)
{
	puts("��������");
}

/* �L���� */
void cat(void)
{
	puts("�j��-��");
}

/* ������ */
void monkey(void)
{
	puts("�E�L�L�b");
}

/* ������I�� */
enum animal select(void)
{
	int tmp;
	
	do{
		printf("0�c��  1�c�L  2�c��  3�c�I�� :");
		scanf("%d", &tmp);
	}while(tmp < Dog || tmp > Invalid);
	return tmp;
}

int main(void)
{
	enum animal selected;
	
	do{
		switch (selected = select()) {
			case Dog	: dog();	break;
			case Cat	: cat();	break;
			case Monkey : monkey();	break;
		}
	}while (selected != Invalid);
	
	return 0;
	
}