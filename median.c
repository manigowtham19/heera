#include<stdio.h>
int main()
{
    int n,a[10],i,num;
    printf("enter the limit");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    n=(n+1)/2-1;
    printf("%d",a[n]);
    return 0;
}
