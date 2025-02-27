#include <iostream>

// COMPANY : PRODUCT
struct MassAndDistance_1
{
    double m1;
    double m2;
    double r;
};

// COMPANY : PRODUCT
class MassAndDistance_2
{
    double m1;
    double m2;
    double r;
};

int main(void)
{
    using std::cout;
    using std::endl;

    // GRAHAK : CLIENT
    struct MassAndDistance_1 X1_rs;
    MassAndDistance_2 X2_rs;

    // CLIENT IS ACCESSING THE INTERNAL MEMBERS OF THE PRODUCT
    // HE / SHE HAS BOUGHT
    X1_rs.m1 = 1.1;
    X1_rs.m2 = 2.2;
    X1_rs.r = 3.3;

    X2_rs.m1 = 1.1;
    X2_rs.m2 = 2.2;
    X2_rs.r = 3.3;

    return 0;
}

// MAINSTREAM CASES
// POWERFUL PROGRAMMING
// LANGUAGE DEEP EXPERT