#include <cs50.h>
#include <stdio.h>

// Get size of grid
int get_size(void);

// Print grid of bricks
void print_grid(int);

int main(void)
{
print_grid(get_size());
}

int get_size()
{
    int n;
    
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);
    return n;
}

void print_grid(int n)
{
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}