//8.6 ����һ���ı����ֱ��ô�Сд���
//2020.10.27          20206696������

#include<stdio.h>
#include<ctype.h>
int main()
{
	char s[100];
	int n;
	scanf("%s", s);

	printf("��д��\n");
	for (n = 0; s[n] != '\0'; n++)
		printf("%c", toupper(s[n]));

	printf("\nСд��\n");
	for (n = 0; s[n] != '\0'; n++)
		printf("%c", tolower(s[n]));

	return 0;

}