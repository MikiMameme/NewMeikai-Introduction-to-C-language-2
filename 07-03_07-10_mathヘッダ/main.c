/* 2�_�Ԃ̋��������߂� */

#include <math.h>
#include <stdio.h>

/* �_(x1,y1)�Ɠ_(x2,y2)�̋��������߂� */
double dist(double x1, double y1, double x2, double y2)
{
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main(void)
{
	double x1, y1;
	double x2, y2;
	
	printf("2�_�Ԃ̋��������߂܂��B\n");
	printf("�_1...X���W:"); scanf("%lf", &x1);
	printf("      Y���W:"); scanf("%lf", &y1);
	printf("�_2...X���W:"); scanf("%lf", &x2);
	printf("      Y���W:"); scanf("%lf", &y2);
	
	printf("������%f�ł��B\n", dist(x1, y1, x2, y2));
	
	return 0;
}