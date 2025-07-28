/* ファイルの中身を小文字を大文字に変換しながらコピーする */

#include<stdio.h>
#include<ctype.h>

int main(void)
{
	int ch;
	FILE *sfp;
	FILE *dfp;
	char sname[FILENAME_MAX];
	char dname[FILENAME_MAX];
	
	printf("コピ-元フアイル名:");	scanf("%s", sname);
	printf("コピ-先フアイル名:");	scanf("%s", dname);
	
	if((sfp = fopen(sname, "r")) == NULL)
		printf("\aコピ-元フアイルを開けませんでした。\n");
	else {
		if((dfp = fopen(dname, "w")) == NULL)
			printf("\aコピ-先フアイルを開けませんでした。\n");
		else {
			while ((ch = fgetc(sfp)) != EOF)
				fputc(toupper(ch), dfp);
			fclose(dfp);
		}
		fclose(dfp);
	}
	
	return 0;
}