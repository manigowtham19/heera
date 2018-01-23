include<stdio.h>
#include<string.h>
int main()
{
char s;
scanf("%c",&s);
if(isdigit(s)!=0)
{
	printf("yes");
}
else
{
	printf("no");
}
return 0;
}
