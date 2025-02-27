#include <iostream>

using std::cout;
using std::endl;

class Date
{
    private:
        int day;
        int month;
        int year;

    public:
        // CONSTRCUTOR FUNCTION
        Date(int _day, int _month, int _year)
        {
            cout << "*****Date CONSTRUCTOR ENTER*****" << endl;
            cout << "Address of newly allocated object:" << this << endl;
            this->day = _day;
            this->month = _month;
            this->year = _year;
            cout << "*****Date CONSTRUCTOR LEAVE*****" << endl;
        }

        void show()
        {
            cout << "*****Date::show() ENTER*****" << endl;
            cout << "Address of object whose members must be shown:" << this << endl;
            cout << day << "/" << month << "/" << year << endl;
            cout << "*****Date::show() LEAVE*****" << endl;
        }
};

int main(void)
{
    // Memory allocation of 12 bytes of stack frame of main() + call to constructor
    Date myBirthDate_rs(24,09,2000);

    // Memory allocation of 12 bytes of stack frame of main() + call to constructor
    Date cpaBirthDate_rs(1, 12, 2009);

    cout << "main():address of myBirthDate_rs:" << &myBirthDate_rs << endl;
    cout << "main():address of cpaBirthDate_rs:" << &cpaBirthDate_rs << endl;

    cpaBirthDate_rs.show();
    myBirthDate_rs.show();

    return 0;
}
