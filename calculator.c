#include <stdio.h>

int sum(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);
int mod(int x, int y);

int main()
{
    int x, y;
    char op;

    printf("Enter the numbers:\n");
    scanf("%d", &x);
    scanf("%d", &y);

    printf("Enter the option (+, -, *, /, %%):\n");
    scanf(" %c", &op); // Note the space before %c to handle newline

    switch (op)
    {
    case '+': sum(x, y); break;
    case '-': sub(x, y); break;
    case '*': mul(x, y); break;
    case '/':
        if (y == 0) {
            printf("Error: Division by zero is not allowed.\n");
        } else {
            div(x, y);
        }
        break;
    case '%':
        if (y == 0) {
            printf("Error: Modulus by zero is not allowed.\n");
        } else {
            mod(x, y);
        }
        break;
    default:
        printf("Invalid operator!\n");
    }

    return 0;
}

int sum(int x, int y)
{
    printf("Result: %d\n", x + y);
    return x + y;
}

int sub(int x, int y)
{
    printf("Result: %d\n", x - y);
    return x - y;
}

int mul(int x, int y)
{
    printf("Result: %d\n", x * y);
    return x * y;
}

int div(int x, int y)
{
    printf("Result: %d\n", x / y);
    return x / y;
}

int mod(int x, int y)
{
    printf("Result: %d\n", x % y);
    return x % y;
}
