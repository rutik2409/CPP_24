#include <iostream>

using std::cout;

class Test
{
    int a;
    char b;
    float c;
};

Test g_test_1_rs;

void test_1(void);

int main(void)
{
    test_1();
    return (0);
}

void test_1(void)
{
    Test t1_rs

    // g_test_1_rs.a = 100;    // Compile Time Error (CTE)
    // g_test_1_rs.b = 'A';    // CTE
    // g_test_1_rs.c = 3.14f;  // CTE

    //  t1_rs.a = 200;     // CTE
    //  t1_rs.b = 'B';     // CTE
    //  t1_rs.c = 6.28f;   // CTE
}
