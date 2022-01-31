#include <stdio.h>
int ar_check(int num)
{
    int ri_i;

    for (ri_i = 2; ri_i <= num / 2; ri_i++)
    {
        
        if (num % ri_i == 0)
        {
            return 0;
        }
    }
}
void ri_display(int x, int y)
{
    printf("All prime number between %d to %d are: ", x, y);

    while (x <= y)
    {
        
        if (ri_check(x))
        {
            printf("%d, ", x);
        }

        x++;
    }
}
int main()
{
    int x, y, ri_roll;

    printf("Enter your roll no to find the respective values of x and y: ");
    scanf("%d", &ri_roll);
    x = (ri_roll % 10) + 10;
    y = (ri_roll % 100) + 20;

    // Call function to print all primes between the given range.
    ri_display(x, y);

    return 0;
}