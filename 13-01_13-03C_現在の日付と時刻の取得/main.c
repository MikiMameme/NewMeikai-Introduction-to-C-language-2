/* ���݂̓��t�E������\�� */

#include<stdio.h>
#include<time.h>

int main()
{
	time_t current =time(NULL);
	
	struct tm *timer = localtime(&current);
	
	char *wday_name[] = {"��", "��", "��", "��", "��", "��", "�y"};
	
	printf("���݂̓��t�E������%d�N%d��%d��(%s) %d��%d��%d�b�ł��B\n",
		timer->tm_year + 1900,
		timer->tm_mon +1,
		timer->tm_mday,
		wday_name[timer->tm_wday],
		timer->tm_hour,
		timer->tm_min,
		timer->tm_sec
		);
	
	return 0;
}