#include<stdio.h>
#include<string.h>
void main()
{
  char a[100];
  int count,l=0,i;
  printf("enter the string");
  scanf("%[^\n]a", &a);
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]==' ')
    {
    count++;
    }
    l=l+1;
  }
  printf("%d",l-count);
}
