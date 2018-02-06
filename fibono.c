#include<stdio.h>
int main()
{
int  a=0,b=1,i,n,s;
scanf("%d",&n);
printf("%d\t%d\t",a,b);
for(i=2;i<n;i++)
{
s=a+b;
a=b;
b=s;

printf("%d\t",s);
}
return 0;
}

