#include<stdio.h>
#include<string.h>
int main()
{
	char a[100], b[100], c[100];
	c[0] = '\0';
	puts("�����ַ���");
	gets(a);
	int i;
	for (i = 0; a[i] != '\0'; i++) {
		int j = 0;
		while (a[i] >= 'a'&&a[i] <= 'z' || a[i] >= 'A'&&a[i] <= 'Z') 
			b[j++] = a[i++];           //�����ŷָ����ĵ��ʴ��b[]
		b[j] = '\0';
		if (strlen(b) > strlen(c))     //�Ƚ�b[]��c[]�ĳ���
			strcpy(c, b);              //��b[]���Ƚϳ�����b[]���ݴ��c[]��c[]��Ϊ��ǰ��ĵ���
	}
	puts("��ĵ�����");
	puts(c);
	return 0;
}
