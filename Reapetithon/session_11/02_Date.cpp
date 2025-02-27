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
    Date myDate;    // day, month, year 
    Date d1;        // day, month, year 

    myDate.day = 8; 
    myDate.month = 2; 
    myDate.year = 2025; 

    d1.day = 11; 
    d1.month = 3; 
    d1.year = 2026; 

    Date::show(&myDate); 
    Date::show(&d1); 
    
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
    YourClassName YourObjectName; 

    YourClassName::YourFunctionName(&YourObjectName); 

    YourObjectName.YourFunctionName(10, 20); 
}