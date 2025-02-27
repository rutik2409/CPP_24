// REVISION
#include <iostream>

class Test
{
private:
    int a;
    char b;
    float c;
public:
    int d;
    int e;
    int f;
};

// Qualified class
// Test_object.a, Test_object.b, Test_object.c
// Test_ptr->a, Test_ptr->b, Test_ptr->c


int main(void)
{
    Test t1_rs;
    Test t2_rs;

    // CTE
    t1_rs.a = 10;
    t1_rs.b = 'a';
    t1_rs.c = 3.14f;

    // NO COMPILE TIME ERROR
    t1_rs.d = 100;
    t1_rs.e = 200;
    t1_rs.f = 300;
}
