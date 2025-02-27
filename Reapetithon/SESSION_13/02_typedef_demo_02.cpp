// This code will not compile because we have not implemented
// get_roll_number(), get_sal() and get_addr()
// BUT DO INCLUDE THIS CODE IN REPEAITTHON
#include <iostream>

using std::cout;
using std::endl;

int get_roll_number();
double get_sal();
char* get_addr();

// GOOD PRACTICE

typedef int rollnumber_t;
typedef double salary_t;
typedef char* addr_t;

void test_function(void);

int main(void)
{
    int x_rs;      // x_rs is a roll number
    int y_rs;      // y_rs is a salary
    char* s_rs;    // s_rs is an address

    // reccommended practice
    int roll_number_rs;
    double employee_salary_rs;
    char* address_of_student_rs;

    return 0;
}

void test_function(void)
{
    rollnumber_t get_roll_number(void);
    salary_t get_salary(void);
    addr_t get_address(void);

    rollnumber_t roll_number_rs;
    salary_t salary_of_employe_rs;
    addr_t address_of_student_rs;

    roll_number_rs = get_roll_number();
    salary_of_employe_rs = get_salary();
    address_of_student_rs = get_address();
}
