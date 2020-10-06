#include<stdio.h>

int lcm(int, int);

int main()
{
    int a, b, Lcm;
    printf("Enter 2 integers to find LCM of:\n");
    scanf("%d%d", &a, &b);
    Lcm = lcm(a,b);    // function call
    printf("LCM of %d and %d is: %d\n", a, b, Lcm);
    return 0;
}

int lcm(int a, int b)
{
   static int temp = 1;    
    if(temp % a == 0 && temp % b == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        lcm(a,b);
        return temp;
    }
}
