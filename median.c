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
    for(j=1;j<n;j++)
    {
        for(k=j+1;k<n;k++)
        {
            if(a[j]>a[k])
            {
                temp=a[j];
                a[j]=a[k];
                a[k]=temp;
                
            }
        }
        printf("%d\t",a[j]);
    n=(n+1)/2-1;
    printf("%d",a[n]);
    }
    return 0;
}
