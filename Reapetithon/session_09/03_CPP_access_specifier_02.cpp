#include <iostream>

using std::cout;

class Test
{
private:
    int a;

public:
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
    Test t1_rs;

    //  g_test_1_rs.a = 100;   // CTE
    g_test_1_rs.b = 'A';
    g_test_1_rs.c = 3.14f;

    //  t1_rs.a = 200;     // CTE
    t1_rs.b = 'B';
    t1_rs.c = 6.28f;
}