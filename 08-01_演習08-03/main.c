/* ����^�̓�̒l����������֐��`���}�N�� */

#include<stdio.h>

#define swap(type, a,b) do { type t = a; a = b; b = t; } while (0)

int main()
{
	int x, y;
	double a, b;
	
	puts("��̐�������͂��Ă��������B");
	printf("����x:");	scanf("%d", &x);
	printf("����y:");	scanf("%d", &y);
	swap(int, x, y);
	printf("�������܂����B\nx��%d��y��%d�ł��B\n", x, y);
	
	puts("\n��̎�������͂��Ă��������B");
	printf("����a:");	scanf("%lf", &a);
	printf("����b:");	scanf("%lf", &b);
	swap(double, a, b);
	printf("�������܂����B\na��%.3f��%.3f�ł��B\n", a, b);
	
	return 0;
}