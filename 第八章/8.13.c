//8.13 ����Ӣ������Ż���ת����Pig Latin�����������......
//2020.10.28          20206696������

#include<stdio.h>
#include<string.h>

void printLatinWord(char*s);

int main()
{
	char sentence[101];
	char* zhizhen;

	printf("������һ��Ӣ����\n");
	gets_s(sentence);
	zhizhen = strtok(sentence, " ");
	printf("���Ӣ�����ת����Pig Latin�����ǣ�\n");
	while (zhizhen)
	{
		printLatinWord(zhizhen);
		zhizhen = strtok(NULL, " ");
		if (zhizhen)
			printf(" ");
	}
	printf(".");
	return 0;
}

void printLatinWord(char*s)
{
	unsigned int i;
	for (i = 1; i < strlen(s); i++)
		printf("%c", s[i]);
	    printf("%c%s", s[0], "ay");
}