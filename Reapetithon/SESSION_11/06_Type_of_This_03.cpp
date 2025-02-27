// You are not expected to understand this code if you are a beginner
#include <iostream>
#include <typeinfo>

using std::cout;
using std::endl;

class Date
{
    private:
        int day;
        int month;
        int year;
    public:
        void init(int init_day, int init_month, int init_year)
        {
            cout << "Date::init():typeof(this) =" << typeid(this).name() << endl;
            this->day = init_day;
            this->month = init_month;
            this->year = init_year;
        }

        void show()
        {
            cout << "Date::show():typeof(this) =" << typeid(this).name() << endl;
            cout << day << "/" << month << "/" << year << endl;
        }
};

int main(void)
{
    Date myDate_rs;

    myDate_rs.init(8, 2, 2025);
    myDate_rs.show();

    return 0;
}