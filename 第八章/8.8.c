//8.8 �����ĸ���ʾ���������ַ�����������ת����˫���ȸ�������������ǵĺ�
//2020.10.27          20206696������

#include<stdio.h>
#include<stdlib.h>
int main()
{
	char s[100];
	double sum = 0.0;
	int i;
	
	for (i = 1; i <= 4; i++)
	{
		printf("������һ�������������ַ�����");
		scanf("%s", s);
		sum += atof(s);
	}

	printf("���ǵĺ�Ϊ��%f", sum);

	return 0;
	
}