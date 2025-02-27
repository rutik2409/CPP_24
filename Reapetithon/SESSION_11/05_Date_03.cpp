// header file inclusion
#include <iostream>

// importing symbols 'cout' and 'endl' from
// standard namespace
using std::cout;
using std::endl;

// server side -> start
class Date
{
    private:
        // data layout definition
        int day;
        int month;
        int year;
    public:
        // public member functions
        // REMEMBER-> First parameter of init() function is
        // Date* this
        void init(int init_day, int init_month, int init_year)
        {
            this->day = init_day;
            this->month = init_month;
            this->year = init_year;
        }

        // REMEMBER-> first parameter of show() is
        // Date* this
        void show()
        {
            cout << this->day << "/" << this->month
                 << "/" << this->year << endl;
        }
};
// server side end

// client side start
int main(void)
{
    // create an object of class Date
    Date myDate_rs;

    // use object of class datee
    cout << "myDate_rs object before calling init() function on it" << endl;
    myDate_rs.show(); // Date::show(&myDate_rs)
    myDate_rs.init(8, 2, 2025); // Date::init(&myDate_rs, 8, 2, 2025)
    cout << "myDate_rs object after calling init() function on it" << endl;
    myDate_rs.show();

    return (0);
}
// client side end