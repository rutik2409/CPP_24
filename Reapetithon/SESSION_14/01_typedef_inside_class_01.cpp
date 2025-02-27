#include <iostream>

class Date
{
    public:
        typedef int day_t;
        typedef int month_t;
        typedef int year_t;
    private:
        day_t day;
        month_t month;
        year_t year;
    public:
        Date(day_t init_day, month_t init_month, year_t init_year)
        {
            day = init_day;
            month = init_month;
            year = init_year;
        }

        day_t get_day()
        {
            return day;
        }

        month_t get_month(){
            return month;
        }

        year_t get_year()
        {
            return year;
        }
};

int main(void)
{
    Date myDate_rs(15, 2, 2025);
    Date::day_t day_rs = myDate_rs.get_day(); // Date::get_day(&myDate_rs);
    Date::month_t month_rs = myDate_rs.get_month();
    Date::year_t year_rs = myDate_rs.get_year();

    cout << day_rs<< "/" << month_rs << "/" << year_rs;


    return (0);
}

