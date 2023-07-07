#include<stdio.h>
#include<string.h>
int main()
{
	char a[100], b[100], c[100];
	c[0] = '\0';
	puts("输入字符串");
	gets(a);
	int i;
	for (i = 0; a[i] != '\0'; i++) {
		int j = 0;
		while (a[i] >= 'a'&&a[i] <= 'z' || a[i] >= 'A'&&a[i] <= 'Z') 
			b[j++] = a[i++];           //将符号分隔开的单词存进b[]
		b[j] = '\0';
		if (strlen(b) > strlen(c))     //比较b[]和c[]的长度
			strcpy(c, b);              //若b[]长度较长，将b[]内容存进c[]，c[]即为当前最长的单词
	}
	puts("最长的单词是");
	puts(c);
	return 0;
}
