//8.7 �����ĸ���ʾ�������ַ�����������ת����������������ǵĺ�
//2020.10.27          20206696������

#include<stdio.h>
#include<ctype.h>
int main()
{
	char s[100];
	int sum = 0;
	int i;
	
	for (i = 1; i <= 4; i++)
	{
		printf("������һ�������������ַ�����");
		scanf("%s", s);
		sum += atoi(s);
	}

	printf("���ǵĺ�Ϊ��%d", sum);

	return 0;
	
}