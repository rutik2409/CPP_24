#include <stdio.h>

struct Test
{
    int a;
    char b;
    float c;
};

void test_1(void);
struct Test g_test_1_rs;

int main(void)
{
    test_1();
    printf("g_test_1_rs.a=%d, g_test_1_rs.b=%c, g_test_1_rs.c=%f\n",
           g_test_1_rs.a, g_test_1_rs.b, g_test_1_rs.c);

    return (0);
}

void test_1(void)
{
    struct Test t1_rs;

    g_test_1_rs.a = 100;
    g_test_1_rs.b = 'A';
    g_test_1_rs.c = 3.14f;

    t1_rs.a = 200;
    t1_rs.b = 'B';
    t1_rs.c = 6.28;

    printf("t1_rs.a = %d, t1_rs.b=%c, t1_rs.c=%f\n", t1_rs.a, t1_rs.b, t1_rs.c);
}