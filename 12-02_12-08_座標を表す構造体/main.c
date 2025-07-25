/* 2�_�Ԃ̋��������߂� */

#include<stdio.h>
#include<math.h>

#define sqr(n) ((n) * (n))

/* �_�̍��W��\���\���� */
typedef struct {
	double x;
	double y;
} Point;

/* �_pa�Ɠ_pb�̋�����Ԃ� */
double distance_of(Point pa, Point pb)
{														/* �s�^�S���X�̒藝 */
	return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));	/* 2�_�Ԃ̋����̌����� ��((x?-x?)2 + (y?-y?)2) */
}

int main(void)
{
	Point crnt, dest;
	
	printf("���ݒn��X���W :");	scanf("%lf", &crnt.x);
	printf("        Y���W :");	scanf("%lf", &crnt.y);
	printf("�ړI�n��X���W :");	scanf("%lf", &dest.x);
	printf("        Y���W :");	scanf("%lf", &dest.y);
	
	printf("�ړI�n�܂ł̋�����%.2f�ł��B\n", distance_of(crnt, dest));
	
	return 0;
}