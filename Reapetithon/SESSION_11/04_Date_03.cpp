#include <iostream>

using std::cout;
using std::endl;

// SERVER SIDE START
class Date
{
    private:
        int day, month, year;
    public:
        void show()
        {
            cout << this->day << "/" << this->month << "/"
                << this->year << endl;
        }
};
// SERVER SIDE END

// CLIENT SIDE START
int main(void)
{
    // day, month and year of myDate_rs will contain garbage value
    Date myDate_rs;

    myDate_rs.show();  // Date::show(&myDate_rs);

    return (0);
}
// CLIENT SIDE END