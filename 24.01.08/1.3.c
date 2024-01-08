#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char s1[20],s2[20], i, j;
	printf("第一个字符串：");
	scanf("%s", s1);
	printf("第二个字符串：");
	scanf("%s", s2);
	for (i = 0;s1[i] != '\0';++i);
	{

	}
	for(j=0;s2[j]!='\0';++j,++i);
		{
			s1[i]=s2[j];
		}
		s1[i]='\0';
			printf("连接后：");
			system("pause");
			return 0;
}