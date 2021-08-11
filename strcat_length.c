#include<stdio.h>
#include<string.h>
char *ustrcat(char str1[],char str2[])
{
	int i=0,j=0;
	while(str1[i]!='\0')
		i++;
	while(str1[i++]=str2[j++])
		;
		printf("string length =%d\n",strlen(str1));
	return str1;
			

}
int main()
{
	char str1[50],str2[50];
	printf("enter 1st string:");
	gets(str1);
	printf("enter 2nd string:");
	gets(str2);
	printf("%s ",ustrcat(str1,str2));
}
/*output
enter 1st string:dipa
enter 2nd string:mantre
string length =10
dipamantre*/
