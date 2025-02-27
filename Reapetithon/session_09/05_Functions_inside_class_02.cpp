// THIS FILE WILL NOT COMPILE

#include <iostream>

using std::cout;

int compute(int x, int y);

class Date
{
public:
    int day;
    int month;
    int year;

    void show(void)
    {
        cout << day << "/" << month << "/" << year << "\n";
    }

    void show(Date *pDate)
    {
        cout << pDate->day << "/" << pDate->month << "/" << pDate->year << "\n";
    }

    // EVERY FUNCTION THAT IS WRITTEN INSIDE CLASS DATE
    // EXISTS TO PROCESS OBJECT OF CLASS DATE

    // EVERY SUCH FUNCTION MUST ACCEPT ADDRESS OF DATE OBJECT
    // TO UNDERSTAND WHICH DATE OBJECT TO PROCESS IN THE CURRENT CALL?
};

// Let C by any class
// Let f() be any function that we want to define in class

class C
{
public:
    void f(C *pC, /* optional other params*/)
    {
    }

    void g()
    {
    }
};

int main(void)
{
    int result;

    result = compute(10, 5);

    Date myBirthDate_rs;
    myBirthDate_rs.day = 20;
    myBirthDate_rs.month = 7;
    myBirthDate_rs.year = 1986;

    Date::show(&myBirthDate_rs);

    Date d1_rs;
    d1_rs.day = 1;
    d1_rs.month = 2;
    d1_rs.year = 1986;
    Date::show(&d1_rs);

    Date d2_rs;
    d2_rs.day = 2;
    d2_rs.month = 10;
    d2_rs.year = 1988;
    Date::show(&d2_rs);
}

int compute(int x, int y)
{
    return (x + y) * (x - y);
}

//////////////////////////////////////////////////////////////

class Date
{
public:
    int day;
    int month;
    int year;

    void show()
    {
        cout << this->day << "/" << this->month << "/" << this->year << "\n";
    }
};

int main(void)
{
    Date myBirthDate_rs;

    myBirthDate_rs.day = 20;
    myBirthDate_rs.month = 7;
    myBirthDate_rs.year = 1986;

    // Date::show(&myBirthDate_rs);

    // Date::show(&myBirthDate_rs);

    myBirthDate_rs.show(); // Date::show(&myBirthDate_rs);
}

// OBJECT ORIENTED ANALYSIS AND DESIGN WITH
// APPLICATION -> GRADY BOOCH

// FIRST PRINCIPLES

// COMPLEXITY

// OTHER ENGINEERING
