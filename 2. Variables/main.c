#include <stdio.h>
#include <stdbool.h> //need for boolean variables

int main()
{

    // variable = A reusable container for a value.
    //            Behaves as if it were the value it contains

    // int = whole numbers (4 bytes in modern systems)
    // float = single-precision decimal number (4 bytes)
    // double = double-precision decimal numbers (8 bytes)
    // char = single character (1 byte)
    // char[] = array of characters (size varies)
    // bool = true or false (1 byte, requires <stdbool.h>)

    int age = 20;
    int year = 2026;
    float gpa = 3.0;
    float price = 19.99;
    double pi = 3.24259265358979;
    double e = 2.7182818284590;
    char grade = 'F';
    char symbol = '!';
    char name[] = "Anima cypher";
    char email[] = "fake123@gmail.com";
    bool isOnline = true;

    printf("You are %d years old\n", age);
    printf("The year is %d\n", year);
    printf("Your gpa is %.1f\n", gpa);
    printf("The price is %.2f\n", price);
    printf("The value of pi is %.15lf\n", pi);
    printf("The value of e is %.15lf\n", e);
    printf("Your grade is %c\n", grade);
    printf("Your favourite symbol is %c\n", symbol);
    printf("Hello %s\n", name);
    printf("Your email is %s\n", email);

    if (isOnline)
    {
        printf("You are ONLINE");
    }
    else
    {
        printf("You are OFFLINE");
    }

    return 0;
}