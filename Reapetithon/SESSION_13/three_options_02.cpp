#include <iostream>
#include <string>

void test_1(void);
void test_2(void);
void test_3(void);

int main(void){
    test_1();
    test_2();
    test_3();
    return (0);
}

void test_1(void){
    std::string s_rs("hello");
    std::string::size_type i;
}

void test_2(void)
{
    using std::string;

    string s_rs("hello");
    string::size_type i;
}

void test_3(void)
{
    using std::string;
    using string::size_type;

    string s_rs("Hello");
    size_type i;
}