/* �\���̂�Ԃ��֐� */

#include<stdio.h>

/* xyz�\���� */
struct xyz {
	int x;
	long y;
	double z;
};

/* �L�[�{�[�h����ǂݍ���{x, y, z}�̒l������xyz�\���̂�Ԃ� */
struct xyz scan_xyz()
{
	struct xyz temp;
	
	printf("int�^�����ox�̒l:");		scanf("%d", &temp.x);
	printf("long�^�����oy�̒l:");	scanf("%ld", &temp.y);
	printf("double�^�����oz�̒l:");	scanf("%lf", &temp.z);
	
	return temp;
}

int main(void)
{
	struct xyz s;
	
	s = scan_xyz();
	
	printf("s.x = %d\n", s.x);
	printf("s.y = %ld\n", s.y);
	printf("s,z = %f\n", s.z);
	
	return 0;
}