// header file inclusion
#include <stdio.h>
#include <stdlib.h>

// structure definition
struct Date
{
    int day;
    int month;
    int year;
};

// Function declarations
struct Date *createDateInstance(int _day, int _month, int _year);
int getDay(struct Date *pDate_rs);
int getMonth(struct Date *pDate_rs);
int getYear(struct Date *pDate_rs);
void setDay(struct Date *pDate_rs, int newDay);
void setMonth(struct Date *pDate_rs, int newMonth);
void setYear(struct Date *pDate_rs, int newYear);
void showDate(struct Date *pDate_rs);
void releaseDateInstance(struct Date *pDate_rs);

// main function
int main(void)
{
    // Client Side
    struct Date *pNewDate_rs = createDateInstance(25, 1, 2025);
    showDate(pNewDate_rs);
    setDay(pNewDate_rs, 30);
    setMonth(pNewDate_rs, 4);
    setYear(pNewDate_rs, 2026);
    showDate(pNewDate_rs);
    printf(
        "%d/%d/%d\n", getDay(pNewDate_rs),
        getMonth(pNewDate_rs), getYear(pNewDate_rs));
    releaseDateInstance(pNewDate_rs);
    pNewDate_rs = NULL;

    return (0);
}

// Server side

struct Date *createDateInstance(int _day, int _month, int _year)
{
    struct Date *pDate_rs = NULL;

    pDate_rs = (struct Date *)malloc(sizeof(struct Date));
    if (NULL == pDate_rs)
    {
        fprintf(stderr, "malloc():fatal:out of memory\n");
        exit(-1);
    }

    pDate_rs->day = _day;
    pDate_rs->month = _month;
    pDate_rs->year = _year;

    return (pDate_rs);
}

int getDay(struct Date *pDate_rs)
{
    return (pDate_rs->day);
}

int getMonth(struct Date *pDate_rs)
{
    return (pDate_rs->month);
}

int getYear(struct Date *pDate_rs)
{
    return (pDate_rs->year);
}

void setDay(struct Date *pDate_rs, int newDay)
{
    pDate_rs->day = newDay;
}

void setMonth(struct Date *pDate_rs, int newMonth)
{
    pDate_rs->month = newMonth;
}

void setYear(struct Date *pDate_rs, int newYear)
{
    pDate_rs->year = newYear;
}

void showDate(struct Date *pDate_rs)
{
    printf("%d/%d/%d\n", pDate_rs->day, pDate_rs->month, pDate_rs->year);
}

void releaseDateInstance(struct Date *pDate_rs)
{
    free(pDate_rs);
    pDate_rs = NULL;
}
