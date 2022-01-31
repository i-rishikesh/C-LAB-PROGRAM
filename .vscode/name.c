#include <stdio.h>
struct details
{
    char ri_name[50];
    int ri_age;
    int ri_sex;
    int ri_date;
    int ri_month;
    int ri_year;
};

int main()
{
    int ri_i, a, b;
    struct details d[6];
    for (int ri_i = 0; ri_i < 6; ri_i++)
    {
        printf("enter the age\n");
        scanf("%d", &d[ri_i].ri_age);
        scanf("%c", &b);
        printf("enter the name \n");
        scanf("%s", d[ri_i].ri_name);
        scanf("%c", &b);
        printf("enter the sex 1 for male and 2 for female\n");
        scanf("%c", &a);
        scanf("%c", &d[ri_i].ri_sex);
        printf("enter the date of birth\n");
        scanf("%c", &b);
        scanf("%d", &d[ri_i].ri_date);
        scanf("%d", &d[ri_i].ri_month);
        scanf("%d", &d[ri_i].ri_year);
        scanf("%c", &b);
    }
    for (ri_i = 0; ri_i < 6; ri_i++)
    {

        printf("%d.     %s       %d      %d%d%d ", ri_i, d[ri_i].ri_name, d[ri_i].ri_age, d[ri_i].ri_date, d[ri_i].ri_month, d[ri_i].ri_year);
        printf("\n");
    }

    return 0;
}