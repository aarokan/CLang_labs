#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user fo x
    int x = get_int("x: ");

    // Prompt user fo y
    int y = get_int("y: ");

    // Perform addition
    printf("%i\n", x + y);

    // Perform subtraction
    printf("%i\n", x - y);

    // Perform multiplication
    printf("%i\n", x * y);

    // Perform division
    printf("%i\n", x / y);

    // Perform remainder
    printf("%i\n", x % y);    
}