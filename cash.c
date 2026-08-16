#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // 1. Get cents owed
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    // Variables for calculating the number of pieces in each category
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;

    // 2. Count quarters (25c)
    while (cents >= 25)
    {
        cents = cents - 25;
        quarters++;
    }

    // 3. Count dimes (10c)
    while (cents >= 10)
    {
        cents = cents - 10;
        dimes++;
    }

    // 4. Count nickels (5c)
    while (cents >= 5)
    {
        cents = cents - 5;
        nickels++;
    }

    // 5. Count pennies (1c)
    while (cents >= 1)
    {
        cents = cents - 1;
        pennies++;
    }

    // 6. Print summary for used coins only
    if (quarters > 0)
    {
        printf("Used %d Quarter(s) (25c)\n", quarters);
    }
    if (dimes > 0)
    {
        printf("Used %d Dime(s) (10c)\n", dimes);
    }
    if (nickels > 0)
    {
        printf("Used %d Nickel(s) (5c)\n", nickels);
    }
    if (pennies > 0)
    {
        printf("Used %d Penny/Pennies (1c)\n", pennies);
    }

    // Total count
    int total_coins = quarters + dimes + nickels + pennies;
    printf("Total coins: %d\n", total_coins);
}
