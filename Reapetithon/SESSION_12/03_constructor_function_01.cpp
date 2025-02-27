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
            this->day = _day;
            this->month = _month;
            this->year = _year;
        }

        void show()
        {
            cout << day << "/" << month << "/" << year << endl;
        }
};

int main(void)
{
    Date myDate_rs(9, 2, 2025);
    // 12 bytes of memory block will be allocated to Date object
    // Make call to Date::Date(addr_of_new_object, 9, 2, 2025)
    myDate_rs.show(); // Date::show(&myDate_rs)

    return 0;
}
