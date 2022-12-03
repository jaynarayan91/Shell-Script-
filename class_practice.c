#include <stdio.h>
 
int main()
{
    int x, y, gcd, lcm, z, m, n;
 
    printf("Enter two numbers\n");
    scanf("%d %d", &x, &y);
    if (x > y)
    {
        m = x;
        n = y;
    }
    else
    {
        m = y;
        n = x;
    }
    z = m % n;
    while (z != 0)
    {
        m   = n;
        n = z;
        z   = m % n;
    }
    gcd = n;
    lcm = x * y / gcd;
    printf("GCD of %d and %d = %d\n", x, y, gcd);
    printf("LCM of %d and %d = %d\n", x, y, lcm);
}