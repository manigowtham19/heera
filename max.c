#include<stdio.h>
int main()
{
int a[20],i,l;
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
l=a[0];
for(i=0;i<10;i++)
{
if(l<a[i])
{
l=a[i];
}
}
printf("%d",l);
return 0;
}
