#include<stdio.h>
#include<string.h>
void main()
{
  char a[100];
  int count=0,i;
  printf("enter the string");
  scanf("%[^\n]a", &a);
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]==' ')
    {
    count++;
    }
  }
  printf("%d",count);
}
