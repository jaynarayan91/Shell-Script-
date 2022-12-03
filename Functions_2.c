#include<stdio.h>

int lcm(int x, int y);
int main()
{
    int a,b;
    printf("Enter the two numbers\n");
    scanf("%d %d", &a, &b);

    printf("lcm is %d", lcm(a,b));
    return 0;
}
int lcm(int a, int b)
{
    int i;
    for (i = 1; i<= a*b; i++)
   {
        if(i%a== 0 && i%b== 0)
       {
          break;
    }
}    
return i;
}