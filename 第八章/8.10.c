//8.10 ��strcmp�������Ƚ�����������ַ�����ǰn���ַ��������һ���ַ����͵ڶ����ַ����Ĺ�ϵ
//2020.10.27          20206696������

#include<stdio.h>
#include<string.h>
int main()
{
	char a1[101];
	char a2[101];
	int n;

	printf("�������һ���ַ�����");
	scanf("%s", a1);
	printf("������ڶ����ַ�����");
	scanf("%s", a2);
	printf("������Ƚϵ��ַ�������");
	scanf("%d", &n);

	if (strncmp(a1, a2, n) > 0)
		printf("%s����%s", a1, a2);
	else if (strncmp(a1, a2, n) == 0)
		printf("%s����%s", a1, a2);
	else
		printf("%sС��%s", a1, a2);

	return 0;


	
}