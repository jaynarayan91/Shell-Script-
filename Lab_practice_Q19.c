#include <stdio.h>
#include <string.h>

int main() 
{
   char arr[100];
   int i;
   printf("\nEnter a character : ");
   scanf("%d", &i);

   for (i = 0; arr[i]!='\0'; i++) 
   {
      if(arr[i] >= 'a' && arr[i] <= 'z') 
      {
         arr[i] = arr[i] - 32;
      }
   }
   printf("\nCharacter in Upper Case = %d", arr);
   return 0;
}