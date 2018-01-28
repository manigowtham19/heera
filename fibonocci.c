#include<stdio.h>
int main()
{
int  a=0,b=1,i,n,new;
scanf("%d",&n);
printf("%d\t%d",a,b);
for(i=2;i<n;i++)
{
new=a+b;
a=b;
b=new;

printf("%d\t",new);
}
return 0;
}
