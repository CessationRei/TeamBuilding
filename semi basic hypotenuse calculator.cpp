#include <cmath>
#include <iostream>
using namespace std;

//function to calculate
double calcH(double base, double height, double hypotenuse)
{
    double base2, height2;

    //pow(x,y) function to multipy a base number by a power
    // x is the base number
    // y is the power to use for the base number
    base2 = pow(base, 2);
    height2 = pow(height, 2);

    //sqrt() function just roots the number inside the parenthesis
    hypotenuse = sqrt(base2 + height2);

    return hypotenuse;
}

int main()
{
    double base, height, hypotenuse;

    cout << "Input Base Length: ";
    cin >> base;
    cout << '\n';
    cout << "Input Height Length: ";
    cin >> height;

    cout << "The hypotenuse is " << calcH(base,  height,  hypotenuse) << '\n';
    return 0;
}
