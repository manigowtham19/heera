#include<stdio.h>
int main(void)
{
int i,n1,n2,k,r,res=0,j;
scanf("%d%d",&n1,&n2);
for(j=n1,j<=n2,j++)
{
res=0;
k=j;
}
while(k>0)
{
r=k%10;
res=res+(r*r*r);
k=k/10;
}
if(res=j)
{
printf("%d\t",j);
}
return 0;
}
