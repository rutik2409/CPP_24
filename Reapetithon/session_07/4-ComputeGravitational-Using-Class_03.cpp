// header file inclusion
#include <iostream>
#include <exception>
#include <cmath>

// class definition
class MassAndDistance
{
private:
    double m1_rs;
    double m2_rs;
    double r_rs;

public:
    MassAndDistance(double _m1_rs, double _m2_rs, double _r_rs)
    {
        if (_m1_rs <= 0.0 || _m2_rs <= 0.0 || _r_rs <= 0.0)
            throw std::domain_error("Bad values for mass and/or distance");
        this->m1_rs = _m1_rs;
        this->m2_rs = _m2_rs;
        this->r_rs = _r_rs;
    }

    double computeGravitational() const
    {
        // variable definitions
        double G = 6.67 * (10e-11);
        double F;

        // code
        F = (G * this->m1_rs * this->m2_rs) / (this->r_rs * this->r_rs);
        return F;
    }
};

int main(void)
{
    // variable defintions
    MassAndDistance earthSun_rs(1.9891 * (10e30), 5.9722 * (10e24), 149597871000.0);
    MassAndDistance jupitorSun_rs(1.9891 * (10e30), 1.89813 * (10e27), 760070000000.0);
    double forceBetweenEarthAndSun_rs;
    double forceBetweenJupitorAndSun_rs;

    // code
    forceBetweenEarthAndSun_rs = earthSun_rs.computeGravitational();
    forceBetweenJupitorAndSun_rs = jupitorSun_rs.computeGravitational();

    std::cout << "Force between the Sun and the Earth is "
              << forceBetweenEarthAndSun_rs << " Newton" << std::endl;
    std::cout << "Force Between the Sun and the Jupitor is "
              << forceBetweenJupitorAndSun_rs << " Newton" << std::endl;

    return 0;
}