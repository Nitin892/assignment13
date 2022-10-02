// 1. Write a recursive function to calculate sum of first N natural numbers.
#include <stdio.h>
int sum(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d",sum(n));
    return 0;
}

int sum(int n)
{

    if (n == 1)
    {
        return 1;
    }
    return n + sum(n - 1);
}

// 2. Write a recursive function to calculate sum of first N odd natural numbers

#include <stdio.h>
int oddNumbers(int);
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    printf("%d", oddNumbers(x));
    return 0;
}

int oddNumbers(int n)
{

    if (n == 1)
        return 1;

    return 2 * n - 1 + oddNumbers(n - 1);
}
// 3. Write a recursive function to calculate sum of first N even natural numbers

#include <stdio.h>
int evenNumbers(int);
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    printf("%d", evenNumbers(x));
    return 0;
}

int evenNumbers(int n)
{

    if (n == 1)
        return 2;

    return 2 * n + evenNumbers(n - 1);
}

// 4. Write a recursive function to calculate sum of squares of first n natural numbers.
#include <stdio.h>
int sumSquare(int);
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    printf("%d", sumSquare(x));
    return 0;
}

int sumSquare(int n)
{

    if (n == 1)
        return 1;

    return n * n + sumSquare(n - 1);
}
// 5. Write a recursive function to calculate sum of digits of a given number
#include <stdio.h>
int sumOfDigits(int n);

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    printf("%d", sumOfDigits(x));
    return 0;
}
int sumOfDigits(int n)
{
    // 564
    if (n == 0)
        return 0;

    return n % 10 + sumOfDigits(n / 10);
}

// 6. Write a recursive function to calculate factorial of a given number

#include <stdio.h>
int factorial(int n)
{

    if (n == 0)
        return 1;

    return n * factorial(n - 1);
}
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    printf("%d", factorial(x));
    return 0;
}

// 7. Write a recursive function to calculate HCF of two numbers
#include <stdio.h>
int hcf(int n, int m)
{
    static int t;
    

    if (n % t == 0 && m % t == 0)
    {
        return t;
    }
    t--;
    return hcf(n, m);
}
int main()
{
    int x, y;
    printf("Enter two number: ");
    scanf("%d %d", &x, &y);

    printf("%d", hcf(x, y));

    return 0;
}

// 8. Write a recursive function to print first N terms of Fibonacci series.
#include <stdio.h>
void fibonacci(int n)
{
    int static a = 1;
    int static b = -1;
    int static c = 1;
    if (n > 0)
    {
        a = b;
        b = c;
        c = a + b;
        printf("%d\n", c);
        fibonacci(n - 1);
    }
}
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    fibonacci(x);
    return 0;
}

// 9. Write a program in C to count the digits of a given number using recursion.
#include <stdio.h>
int count(int n)
{
    static int c = 0;
    if (n > 0)
    {
        c++;
        count(n / 10);
        return c;
    }
    return c + 1;
}
int main()
{
    int x, y;
    printf("Enter number: ");
    scanf("%d", &x);
    int p = count(x);
    printf("%d", p);
    return 0;
}
// 10. Write a program in C to calculate the power of any number using recursion.

#include <stdio.h>
int power(int n, int m)
{
    if (m == 1)
    {
        return n;
    }
    return n * power(n, m - 1);
}

int main()
{
    int x, y;
    printf("");
    scanf("%d %d", &x, &y);
    int p = power(x, y);
    printf("%d", p);
    return 0;
}
