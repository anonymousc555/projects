#include <stdio.h>



/**
 * main - A simple menu calculator that processes maximum of two input.
 * @a,b - an integer variable that stores the operand entered by the user.
 * @n - an interger variable that stores operand for remainder & factorial calculations.
 * 
 * add(int a, int b) - a function that returns the sum of a & b.
 * sub(int a, int b) - a function that returns the subtraction of b from a.
 * mul(int a, int b) - a function that returns that multiplication of a and b.
 * divi(int a,int b) - a function that returns that division of a by b.
 * rem(int n) - a funtion that returns the remainder of n.
 * fact(int n) - a function that returns the factorial of n.
 */


int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divi(int a, int b);
int rem(int n);
int fact(int n);

int main()
{
    int s, a, b, res, n;
    printf("#######################################\n");
    printf("=======SIMPLE MENU CALCULATOR==========\n");
    printf("---------------------------------------\n");
    printf("#######################################\n");
    printf("Choose an option below\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Remainder\n");
    printf("6. Factorial\n");
    printf("Enter an option: ");
    scanf("%d", &s);
    if (s == 6 || s == 5) 
    {
        printf("Enter an operand: ");
        scanf("%d", &n);
    }
    else {
        printf("Enter two operands: ");
        scanf("%d %d", &a, &b);
    }

    switch (s) {
    case 1: {
        res = add(a, b);
        printf("%d", res);
        break;
    }
    case 2: {
        res = sub(a, b);
        printf("%d", res);
        break;
    }
    case 3: {
        res = mul(a, b);
        printf("%d", res);
        break;
    }
    case 4: {
        res = divi(a, b);
        printf("%d", res);
        break;
    }
    case 5: {
        res = rem(n);
        printf("%d", res);
        break;
    }
    case 6: {
        res = fact(n);
        printf("%d", res);
        break;
    }


    }

    return (0);
}
int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int divi(int a, int b)
{
    return a / b;
}

int rem(int n)
{
    return n % 10;
}

int fact(int n)
{
    if (n == 0)
        return 1;
    
    return n * fact(n - 1);
}
