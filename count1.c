#include<stdio.h>
int main()
{
 int a,count=0;
scanf("%d",&a);
if(a<=100000000000)
{
while(a>0)
{
a=a/10;
count++;
}
}
printf("%d",count);
return 0;
}
