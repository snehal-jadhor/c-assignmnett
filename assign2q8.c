#include<stdio.h>
int main()
{
  char ch;
  printf("Enter lowercase character:");
  scanf("%c",&ch);
  
  if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
     { printf("%c is a vowel.\n",ch);
     }else if ((ch >= 'a' && ch <='z'))
     { 
    printf("%c is a consonant.\n",ch);
     } else {
        printf("Enter a lowercase alphabet.\n");
     }
     
    return 0;
}