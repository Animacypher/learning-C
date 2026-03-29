#include <stdio.h>

int main()
{

    // Formar specifier = Special tokens that begin with a % symbol,
    //                    followed by a character that specifies the data type
    //                    and optional modifiers (width, precision, flags).
    //                    The control how data is displayed or interpreted.

    int age = 25;
    float price = 19.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "Anima cypher";

    printf("%d\n", age);
    printf("%f\n", price);
    printf("%lf\n", pi);
    printf("%c\n", currency);
    printf("%s\n", name);

    // width
    int num1 = 1;
    int num2 = 10;
    int num3 = 100;
    int num4 = -100;

    printf("%4d\n", num1);
    printf("%04d\n", num2);
    printf("%-4d\n", num3);
    printf("%+d\n", num4);

    // float
    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    printf("%+7.1f\n", price1);
    printf("%+7.2f\n", price2);
    printf("%+7f\n", price3);

    return 0;
}