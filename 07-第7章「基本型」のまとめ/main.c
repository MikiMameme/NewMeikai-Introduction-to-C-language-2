/* ��7�́u��{�^�v�̂܂Ƃ� */

#include<stdio.h>

int main(void)
{
	int i, no;
	float value;
	float sum = 0.0f;
	
	puts("���������_�����x�����Z���܂��B");
	printf("�l:");	scanf("%f", &value);
	printf("��:");	scanf("%d", &no);
	
	for(i = 0; i < no; i++)
		sum += value;
	printf("���Z���ʂ�%f�ł��B\n", sum); /* ���̎�̌J��Ԃ���float�͓K�؂Ȃ̂��l���Ă݂�B */
										/* ���_��͐������͂��Ȃ̂Ɍ��ʂ������ɈႤ... */
	return 0;
}