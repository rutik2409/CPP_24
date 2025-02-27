// REVISION CODE
#include <iostream>

using std::cout;
using std::endl;

class Date
{
    public:
        int day;
        int month;
        int year;

        void show(Date* pDate)
        {
            cout << pDate->day << "/" << pDate->month << "/" << pDate->year << "/" << endl;
        }
};

int main(void)
{
    Date myDate_rs;    // day, month, year
    Date d1_rs;        // day, month, year

    myDate_rs.day = 8;
    myDate_rs.month = 2;
    myDate_rs.year = 2025;

    d1_rs.day = 11;
    d1_rs.month = 3;
    d1_rs.year = 2026;

    Date::show(&myDate_rs);
    Date::show(&d1_rs);

}

class C
{
    public:
        // f() exists to algorithmically process an object of class C
        void f(){
            // Which object of class C will be processed in the current
            // call of C::f()
        }
};

class YourClassName
{
    private:
        int a;
        char b;
        float c;
    public:
        // YourClassName* this -> FIRST FORMAL PARAMTER
        void YourFunctionName(int m, int n)
        {
            this->data_member
            this->function_member

            this->a
            this->b
            this->c

            m
            n
        }
};

int main(void)
{
    YourClassName YourObjectName_rs;

    YourClassName::YourFunctionName(&YourObjectName_rs);

    YourObjectName_rs.YourFunctionName(10, 20);
}