/* ���ʂ�\���񋓑̂ƋG�߂�\���񋓑� */

#include<stdio.h>

enum sex {Male, Female};
enum season {Spring, Summer, Autumn, Winter};

/* ���ʂ�\�� */
void print_sex(enum sex sex)
{
	switch(sex) {
		case Male   : printf("�j"); break;
		case Female : printf("��"); break;
	}
}

/* �G�߂�\�� */
void print_season(enum season season)
{
	switch(season) {
		case Spring : printf("�t"); break;
		case Summer : printf("��"); break;
		case Autumn : printf("�H"); break;
		case Winter : printf("�~"); break;
	}
}
/* ���ʂ�I�� */
enum sex select_sex(void)
{
	int tmp;
	
	do{
		printf("0�c�j  1�c�� :");
		scanf("%d", &tmp);
	}while(tmp < Male || tmp > Female);
	return tmp;
}


/* �G�߂�I�� */
enum season select_season(void)
{
	int tmp;
	
	do{
		printf("0�c�t 1�c�� 2�c�H 3�c�~ :");
		scanf("%d", &tmp);
	}while(tmp < Spring || tmp > Winter);
	return tmp;
}

int main(void)
{
	enum sex your_sex;
	enum season your_season;
	
	printf("���Ȃ��̐��� "); your_sex = select_sex();
	printf("���܂ꂽ�G�� "); your_season = select_season();
	
	printf("���Ȃ���"); print_sex(your_sex);
	printf("�ŁA");     print_season(your_season);
	printf("�ɐ��܂ꂽ�̂ł��ˁB\n");
	
	return 0;
}
