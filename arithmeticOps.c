//  Arithmetic Operators in C:
//   Arithmetic operators are used to perform mathematical operations between variables and constants.
//   The basic arithmetic operators in C include:

#include <stdio.h>

int main()
{
    int num1 = 12;
    int num2 = 4;

    //   1. Addition (+): Adds two operands.

    int addition = num1 + num2;
    printf("Addition: %d + %d = %d\n", num1, num2, addition);

    // 2. Subtraction (-): Subtracts the second operand from the first.

    int subtraction = num1 - num2;
    printf("Subtraction: %d - %d = %d\n", num1, num2, subtraction);

    //  * 3. Multiplication (*): Multiplies two operands.

    int multiplication = num1 * num2;
    printf("Multiplication: %d * %d = %d\n", num1, num2, multiplication);

    //  * 4. Division (/): Divides the first operand by the second (returns an integer result if both operands are integers).

    int division = num1 / num2;
    printf("Division: %d / %d = %d\n", num1, num2, division);

    //  * 5. Modulus (%): Returns the remainder of the division (works only with integers).

    int modulus = num1 % num2;
    printf("Modulus: %d %% %d = %d\n", num1, num2, modulus);
}