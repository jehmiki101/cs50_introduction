#include <cs50.h>
#include <stdio.h>

void print_row(int height, int bricks);
int main(void)
{
    while (true)
    {
        int prompt = get_int("Height: ");
        if (prompt <= 0)
        {
            printf("Please enter a number above zero\n");
            continue;
        }
        if (prompt >= 9)
        {
            printf("Please enter a number below nine\n");
            continue;
        }
        else
        {
            for (int i = 1; i <= prompt; i++)
            {
                int empty = prompt - i;
                print_row(empty, i);
            }
            break;
        }
    }
}

void print_row(int point, int bricks)
{
    for (int i = 1; i <= point; i++)
    {
        printf(" ");
    }
    for (int j = 1; j <= bricks; j++)
    {
        printf("#");
    }
    if (bricks >= 0)
    {
        printf("  ");
    }
    for (int k = 1; k <= bricks; k++)
    {
        printf("#");
    }
    printf("\n");
}
