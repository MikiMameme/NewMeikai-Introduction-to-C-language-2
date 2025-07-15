/* ���t��O�����邢�͗����ɍX�V���� */

#include<stdio.h>

/* y�N�͂��邤�N���H */
int is_leap(int y)
{
	return y %4 == 0 && y % 100 != 0 || y % 400 == 0;
}

/* y�Nm���̓��� */
int days_of_month(int y, int m)
{
	int mdays[][12] = {
		{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }, /* ���N */
		{ 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }, /* ���邤�N */
	};
	return mdays[is_leap(y)][m - 1];
}

/* y�Nm��d����O���̓��t�ɍX�V */
void decrement_date(int *y, int *m, int *d)
{
	if(*d > 1)
		--*d;
	else {
		if(--*m < 1) {
			--*y;
			*m = 12;
		}
		*d = days_of_month(*y, *m);
	}
}

/* y�Nm��d���𗂓��̓��t�ɍX�V */
void increment_date(int *y, int *m, int *d)
{
	if(*d < days_of_month(*y, *m))
		++*d;
	else {
		if(++*m > 12) {
			++*y;
			*m = 1;
		}
		*d = 1;
	}
}

int main(void)
{
	int i, n;
	int y, m, d;
	
	puts("���t����͂��Ă��������B");
	printf("�N:");	scanf("%d", &y);
	printf("��:");	scanf("%d", &m);
	printf("��:");	scanf("%d", &d);
	
	printf("�����߂��܂���:");	scanf("%d", &n);
	for(i = 0; i < n; i++)
	decrement_date(&y, &m, &d);
	
	printf("%d�N%d��%d���ɂȂ�܂����B\n", y, m, d);
	
	printf("�����i�߂܂���:");	scanf("%d", &n);
	for(i = 0; i < n; i++)
		increment_date(&y, &m, &d);
		
	printf("%d�N%d��%d���ɂȂ�܂����B\n", y, m, d);
	
	return 0;
}