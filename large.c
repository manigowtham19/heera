#include<stdio.h>
void main()
{
int a,b,c;
printf("enter three numbers");
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
{
printf("a is bigger");
}
elseif((b>c)&&(b>a))
{
printf("b is bigger");
}
else
{
printf("c is bigger");
}
}
