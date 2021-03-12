#include<stdio.h>
void main()
{
	int i;
	char str[100];
	printf("enter the string");
	gets(str);
	i=0;
	while(str[i]!='\0'){
		if((str[i]>=97 && str[i]<=122) || (str[i]>=65 && str[i]<=90)){
			printf("%c",str[i]);
		}
		i++;
	}
}
