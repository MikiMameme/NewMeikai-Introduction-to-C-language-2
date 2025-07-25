/* �����Ԃ̈ړ� */

#include<stdio.h>
#include<math.h>

#define sqr(n) ((n) * (n))

/* �_�̍��W��\���\���� */
typedef struct {
	double x;
	double y;
} Point;

/* �����Ԃ�\���\���� */
typedef struct {
	Point pt;
	double fuel;
} Car;

/* �_pa�Ɠ_pb�̋�����Ԃ� */
double distance_of(Point pa, Point pb)
{
	return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}

/* �����Ԃ̌��݈ʒu�Ǝc��R����\�� */
void put_info(Car c)
{
	printf("���݈ʒu:(%.2f, %.2f)\n", c.pt.x, c.pt.y);
	printf("�c��R��:(%.2f���b�g��\n", c.fuel);
}

/* c�̎w���Ԃ�ړI���Wdest�Ɉړ� */
int move(Car *c, Point dest)
{
	double d = distance_of(c->pt,dest);
	if(d > c->fuel)
		return 0;
	c->pt = dest;
	c->fuel -= d;
	return 1;
}

int main(void)
{
	Car mycar = {{0.0, 0.0}, 90.0};
	
	while(1) {
		int select;
		Point dest;
		put_info(mycar);
		printf("�ړ����܂����H�yYes...1 / No...0�z:");
		scanf("%d", &select);
		if(select != 1) break;
		
		printf("�ړI�n��X���W:");	scanf("%lf", &dest.x);
		printf("        Y���W:");	scanf("%lf", &dest.y);
		if(!move(&mycar, dest))
			puts("\a�R���s���ňړ��ł��܂���B");
	}
	return 0;
}