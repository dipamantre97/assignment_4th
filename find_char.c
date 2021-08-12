#include<stdio.h>
#include<string.h>
char *ustrchr(char *s,int ch)
{
	int i;
	for(i=0;s[i];i++)
	{
		if(s[i]==ch)
		return (s+i);
	}
	return 0;
}
int main()
{
	char s[100],ch,*p;
	printf("Enter string1:");
	scanf("%s[^\n]s",s);
	printf("enter char:");
	scanf(" %c",&ch);
	p=ustrchr(s,ch);
	if(p>0)
	printf("found at %d\n",p-s);
	else
	printf("not found\n");
}
