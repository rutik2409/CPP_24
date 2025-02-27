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
    // Define three local objects of class Date
    Date d1_rs;
    Date d2_rs;
    Date d3_rs;

    // Define three pointers to class Date
    Date *pDate1_rs = 0; // pDate1_rs is a pointer to class Date
    Date *pDate2_rs = 0;
    Date *pDate3_rs = 0;

    // Set Pointers to addresses
    pDate1_rs = &d1_rs;
    pDate2_rs = &d2_rs;
    pDate3_rs = &d3_rs;

    // Setting day month year of d1_rs
    pDate1_rs->day = 2;
    pDate1_rs->month = 2;
    pDate1_rs->year = 2025;

    // Setting day month year of d2_rs
    pDate2_rs->day = 5;
    pDate2_rs->month = 6;
    pDate2_rs->year = 1990;

    // Setting day month year of d3_rs
    pDate3_rs->day = 11;
    pDate3_rs->month = 12;
    pDate3_rs->year = 2028;

    cout << "main():Making use of pointer pDate1_rs to make a call to Date::show()" << endl;
    cout << "main():Address of object 'd1_rs' is:" << pDate1_rs << endl;
    pDate1_rs->show(); // == Date::show(&d1_rs); // formal parameter will be 'this' pointer

    cout << "main():Making use of pointer pDate2_rs to make a call to Date::show()" << endl;
    cout << "main():Address of object 'd2_rs' is:" << pDate2_rs << endl;
    pDate2_rs->show(); // == Date::show(&d2_rs) // formal parameter will be 'this' pointer

    cout << "main():Making use of pointer pDate3_rs to make a call to Date::show()" << endl;
    cout << "main():Address of object 'd3_rs' is:" << pDate3_rs << endl;
    pDate3_rs->show(); // == Date::show(&d3_rs) // formal parameter will be 'this' pointer

    return (0);
}

//  pDate1_rs->show();
// Date::show(pDate1_rs);

// Date* pDate1_rs;
// Date* this

// this = pDate1_rs

// d1_rs.show();
// this = &d1_rs;

// pDate1_rs=&d1_rs;
// this=pDate1_rs
