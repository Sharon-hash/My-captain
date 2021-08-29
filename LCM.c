#include<stdio.h>

int find_lcm(int, int);   // function prototype declaration

int main()
{
    int a, b, lcm;
    printf("\nEnter 2 integers to find LCM of:\n");
    scanf("%d%d", &a, &b);
    lcm = find_lcm(a,b);    // function call
    printf("\n LCM of %d and %d is: %d\n\n", a, b, lcm);
    return 0;
}

int find_lcm(int a, int b)  // function definition
{
    static int temp = 1;    
    if(temp%a == 0 && temp%b == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        find_lcm(a,b);
        return temp;
    }
}
