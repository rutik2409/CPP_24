#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;

class MassAndDistance
{
    private:
        double m1;
        double m2;
        double r;

    public:
        MassAndDistance(double _m1, double _m2, double _r)
        {
            this->m1 = _m1;
            this->m2 = _m2;
            this->r = _r;
        }

        double computeGravitational()
        {
            double G = (6.67 * 10e-11);
            double F;

            if(m1 <= 0.0 || m2 <= 0.0 ||  r <= 0.0)
            {
                cout << "Invalid value of mass and/or distance" << endl;
                cout << "Exiting the application ..." << endl;
                exit(-1);
            }

            F = (G*m1*m2)/(r*r);

            return (F);
        }
};

int main(void)
{
    MassAndDistance sunEarth_rs(1.9891e30, 5.9722e24, 149597871000.0);

    cout << "Gravitational force of attraction between the sun and the earth is = "
            << sunEarth_rs.computeGravitational() << " Newton" << endl;

    return 0;
}

// C -> C++ MIGRATION -> CODING LEVEL COMPLETE