#include<stdio.h>
void main()
{
int rev,num,n;
n=num;
while(n!=0)
{
rev=n%10;
rev=(rev*10)+rev;
n=n/10;
}
if(n=rev)
{
printf("yes");
}
else
{
printf("No");
}
}
