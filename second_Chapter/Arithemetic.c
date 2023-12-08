#include <stdio.h>
#include<math.h>

int main()
{

    int a = 1;
    int b = 2;
    int total = a + b;
    int mult = a * b;
    int power = pow(a,b);

    printf("%d, %d\n", total, mult);
    printf("The power is %d\n", power);

    // Modular Operator

    printf("%d\n", b % a);

    printf("%f\n", 2.0 * 2);

    int x = (int) 1.9999;
    printf("%d\n",x);

    // RelationalOperator

    int a1 = 1;
    int b2 = 1;

    // 1 means true and 0 means false
    printf("This is %d\n", a1 == b2);
    printf("This is %d\n", a1 > b2);
    printf("This is %d\n", a1 >= b2);
    printf("This is %d\n", a1 < b2);
    printf("This is %d\n", a1 <= b2);

    // && AND || OR ! NOT

    printf("AND %d\n", 4 > 9 && 5 > 2);
    printf("AND %d\n", 4 > 3 && 5 > 2);

    printf("OR %d\n", 4 > 9 || 5 > 2);

    printf("NOT %d\n", !(5>3));
    printf("NOT %d\n", !(5>6));


    int a3 = 1;
    int b3 = 5;

    a3+= b3;
    printf("%d",a3);
    return 0;
}