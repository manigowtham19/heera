#include<stdio.h>
#include<string.h>
int main()
{
char s[40];
int i,count=0;
gets(s);
while(s[i]!='\0')
{
if(s[i]>='0'&&s[i]<='9')
count++;
i++;
}
printf("%d",count);
return 0;
}
