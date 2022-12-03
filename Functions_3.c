#include<stdio.h>
int num();
int main()

{
    num();
    return 0;
int num()
 {
    int i,n;
    printf("Enter the number\n");
    scanf("%d", &n);

for (i = 0; i<= n; i++)
   {
    if(n%2== 0)
    {
        printf("it is not prime number");
    }
    if (n == 1)
    {
        printf("it is prime number");
    }
    
    }
 }
 return 0;
}