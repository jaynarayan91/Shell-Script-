#include<stdio.h>

int num();
int main()
{
    num();
    return 0;
}
int num()
{
    int a,b,i;
    printf("Enter the two numbers\n");
    scanf("%d %d", &a, &b);
 for(i = 1; i<=a*b; i++)
 {
    if(i%a== 0  && i%b== 0)
    {
        printf("lcm is %d", i);
        break;
    }
 }
 return i;    
}