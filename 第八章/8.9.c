//8.9 ��strcmp�������Ƚ�����������ַ����������һ���ַ����͵ڶ����ַ����Ĺ�ϵ
//2020.10.27          20206696������

#include<stdio.h>
#include<string.h>
int main()
{
	char a1[101];
	char a2[101];

	printf("�������һ���ַ�����");
	scanf("%s", a1);
	printf("������ڶ����ַ�����");
	scanf("%s", a2);

	if (strcmp(a1, a2) > 0)
		printf("%s����%s", a1, a2);
	else if (strcmp(a1, a2) == 0)
		printf("%s����%s", a1, a2);
	else
		printf("%sС��%s", a1, a2);

	return 0;


	
}