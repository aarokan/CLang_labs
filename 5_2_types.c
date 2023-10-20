#include <cs50.h>
#include <stdio.h>
#include <stdbool.h> // Imported the header file to use bool type

int main(void)
{
    // bool, a Boolean expression of either true or false
    bool isCLangFun = true;

    // int, integers up to a certain size, or number of bits
    int myNum = 2;

    // float, a floating-point value, or real number with a decimal value
    float myFloatNum = 4.99;
    float floatPiLimit = 3.141592653589793;

    // char, a single character like a or 2
    char myLetter = 'd';

    // double, a floating-point value with more digits than a float
    double pi = 3.141592653589793;
    double doubleLimit = 9876543210.123456789012345;

    // long, integers with more bits, so they can count higher than an int
    long myLong = -21556;

    // string, a string of characters
    string cs50String = "string using CS50 Lib";
    char cArrayOfChar[] = "string using C array of char";

    printf("isCLangFun = %d\n", isCLangFun);
    printf("myNum = %i\n", myNum);
    printf("myFloatNum = %f\n", myFloatNum);
    printf("floatPiLimit = %f\n", floatPiLimit);
    printf("myLetter = %c\n", myLetter);
    printf("pi = %lf\n", pi);
    printf("doubleLimit = %lf\n", doubleLimit);
    printf("myLong = %li\n", myLong);
    printf("cs50Strong = %s\n", cs50String);
    printf("cArrayOfChar = %s\n", cArrayOfChar);
}

// %c   %f   %i   %li   %s

