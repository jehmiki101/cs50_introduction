#include <cs50.h>
#include <stdio.h>

void coins(int cash, int nc);
int main(void)
{
    while (true)
    {
        int cash = get_int("Change owed: ");
        int count = 0;
        if (cash <= 0)
        {
            continue;
        }
        coins(cash, count);
        break;
    }
}

void coins(int cash, int nc)
{
    nc = 0;
    while (cash >= 25)
    {
        nc++;
        cash = cash - 25;
    }
    while (cash >= 10)
    {
        nc++;
        cash = cash - 10;
    }
    while (cash >= 5)
    {
        nc++;
        cash = cash - 5;
    }
    while (cash >= 1)
    {
        nc++;
        cash = cash - 1;
    }
    printf("%d\n", nc);
}
