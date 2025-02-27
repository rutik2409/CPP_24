// This is a revision code

#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

int main(void)
{
    int num_rs = 10;
    printf("num_rs = %d\n", num_rs); // 10 will be printed

    struct Date myDate_rs = {9, 2, 2025};
    printf("%d/%d/%d\n", myDate_rs.day, myDate_rs.month, myDate_rs.year);
    // 9, 2, 2025

    return (0);
}