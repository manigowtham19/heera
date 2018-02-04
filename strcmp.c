#include <stdio.h>

int main()
{
    char str1[20],str2[50];
    int i;
    printf("\nEnter two strings");
    scanf("%s%s",str1,str2);
    i=0;
    while (str1[i] == str2[i] && str1[i] != '\0')
      i++;
   if (str1[i]>str2[i])
      printf("%s ",str1);
      else if(str1[i]<str2[i])
      {
          printf("%s",str2);
      }
    else
    {
        printf("string is %s",str1);
    }
    return 0;
}
