/* �z��Ɋi�[���ꂽ��������󕶎���ɂ��� */

#include<stdio.h>

int main(void)
{
	char s[] = "ABC";
	char str[48];
	
	printf("������str:");
	scanf("%s", str);
	
	printf("������s ��\"%s\"�ł��B\n", s);
	printf("������str��\"%s\"�ł��B\n", str);
	
	s[0] = '\0';
	str[0] = '\0';
	
	printf("������s ���󕶎���\"%s\"�ɂ��܂����B\n", s);
	printf("������str���󕶎���\"%s\"�ɂ��܂����B\n", str);
	
	return 0;
}