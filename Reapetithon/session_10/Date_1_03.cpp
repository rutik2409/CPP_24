#include <iostream>

using std::cout;
using std::endl; // use this for '\n'

class Date
{
public:
    int day;
    int month;
    int year;

    void show()
    {
        cout << "****ENTER Date::show()****" << endl;
        cout << "Address of object used for making the current call:" << this << endl;
        cout << this->day << "/" << this->month << "/" << this->year << endl;
        cout << "****LEAVE Date::show()****" << endl;
    }
};

int main(void)
{
    Date d1_rs;
    Date d2_rs;
    Date d3_rs;

    // Setting day month year of d1_rs
    d1_rs.day = 2;
    d1_rs.month = 2;
    d1_rs.year = 2025;

    // Setting day month year of d2_rs
    d2_rs.day = 5;
    d2_rs.month = 6;
    d2_rs.year = 1990;

    // Setting day month year of d3_rs
    d3_rs.day = 11;
    d3_rs.month = 12;
    d3_rs.year = 2028;

    cout << "main():Making use of object 'd1_rs' to make a call to Date::show()" << endl;
    cout << "main():Address of object 'd1_rs' is:" << &d1_rs << endl;
    d1_rs.show(); // == Date::show(&d1_rs); // formal parameter will be 'this' pointer

    cout << "main():Making use of object 'd2_rs' to make a call to Date::show()" << endl;
    cout << "main():Address of object 'd2_rs' is:" << &d2_rs << endl;
    d2_rs.show(); // == Date::show(&d2_rs) // formal parameter will be 'this' pointer

    cout << "main():Making use of object 'd3_rs' to make a call to Date::show()" << endl;
    cout << "main():Address of object 'd3_rs' is:" << &d3_rs << endl;
    d3_rs.show(); // == Date::show(&d3_rs) // formal parameter will be 'this' pointer

    return (0);
}