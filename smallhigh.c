#include<stdio.h>
int main()
{
    int a[10],i,n,j,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
    temp=a[j];
    a[j]=a[i];
    a[i]=temp;
        }
        }
    }
    printf("%d\t%d\t",a[n-1],a[0]);
		return 0;
}
    
