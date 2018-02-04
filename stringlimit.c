#include<stdio.h>
int main()
{
char s[50];
int i,n;
printf("Enter string\n");
gets(s);
printf("Enter limit\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 printf("%s\n",s);
}
return 0;
}
