//8.11 �������ӣ���Ŀ�ܳ��������п���
//2020.10.27          20206696������

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	char* article[] = { "the","a","one","some","any" };
	char* noun[] = { "boy","girl","dog","town","car" };
	char* verb[] = { "drove","jumped","ran","walked","skipped" };
	char* preposition[] = { "to","from","over","under","on" };
	char sentence[101] = "";
	int i;
	for (i = 0; i <= 20; i++)
	{
		strcat(sentence, article[rand() % 5]);
		strcat(sentence, " ");
		strcat(sentence, noun[rand() % 5]);
		strcat(sentence, " ");
		strcat(sentence, verb[rand() % 5]);
		strcat(sentence, " ");
		strcat(sentence, preposition[rand() % 5]);
		strcat(sentence, " ");
		strcat(sentence, article[rand() % 5]);
		strcat(sentence, " ");
		strcat(sentence, noun[rand() % 5]);
		sentence[0] = toupper(sentence[0]);
		printf("%s.\n", sentence);
		sentence[0] = '\0';
	}

	return 0;


	
}