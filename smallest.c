#include<stdio.h>
int main()
{
int a[20],i,l,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
l=a[0];
for(i=0;i<n;i++)
{
if(l>a[0])
{
l=a[i];
}
}
printf("%d",l);
return 0;
}
