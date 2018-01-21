#include<stdio.h>
void main()
{
int l,h,i;
scanf("%d%d",&l,&h);
for(i=l;i<=h;i++)
{
if((i%2)==0)
{
printf("%d\t",i);
}
}
}
