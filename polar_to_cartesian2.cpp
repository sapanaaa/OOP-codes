#include <iostream>
#include <cmath>

class polar
{
    float radius;
    int angle;
public:
    polar()
    {
        radius = 0;
        angle = 0;
    }

    polar(float rad, int ang)
    {
        radius = rad;
        angle = ang;
    }

    float getRadius() const
    {
        return radius;
    }

    int getAngle() const
    {
        return angle;
    }

    void display()
    {
        std::cout << "Radius: " << radius << " Angle: " << angle << std::endl;
    }
};

class cartesian
{
    float xco;
    float yco;

public:
    cartesian()
    {
        xco = 0;
        yco = 0;
    }

    cartesian(polar p)
    {
        xco = p.getRadius() * cos(p.getAngle() * 3.14 / 180);
        yco = p.getRadius() * sin(p.getAngle() * 3.14 / 180);
    }

    void display()
    {
        std::cout << "X-coordinate: " << xco << " Y-coordinate: " << yco << std::endl;
    }
};

int main()
{
    polar pol(1.4, 30);
    cartesian cart(pol);

    std::cout << "Data in polar form:" << std::endl;
    pol.display();

    std::cout << "Data in cartesian form:" << std::endl;
    cart.display();

    return 0;
}
