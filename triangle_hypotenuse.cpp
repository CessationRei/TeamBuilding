#include <iostream>
#include <cmath>
using namespace std;
// Class Triangle
class Triangle
{
private:
    // declare private variables
    double base, height, hypotenuse;

public:
    // default constructor
    Triangle() : base(0), height(0), hypotenuse(0) {}

    // methods
    // function to solve for hypotenuse
    double getH(double _base, double _height)
    {

        base = _base;
        height = _height;
        hypotenuse = sqrt(pow(base, 2) + pow(height, 2));
        return hypotenuse;
    }
    // function to decorate or show the triangle
    void decorate()
    {
        // decorators
        for (int i = 1; i <= height; ++i)
        {
            // Print spaces
            for (int j = 1; j <= height - i; ++j)
            {
                cout << " ";
            }

            // Print asterisks
            for (int k = 1; k <= i; ++k)
            {
                cout << "*";
            }

            // Move to the next line
            cout << '\n';
        }
        // prints the results
        cout << "\nBase: " << base;
        cout << "\nHeight: " << height;
        cout << "\nHypotenuse: " << hypotenuse << '\n';
    }
};

// function for repeating the program continously
bool repeat(string repeat = "")
{
    while (repeat != "y" && repeat != "n")
    {
        cout << "Do you want to continue (y,n)? ";
        cin >> repeat;
    }
    return repeat == "y";
}

// Main funtion
int main()
{

    do
    {
        double base, height;
        cout << "\nEnter the base: ";
        cin >> base;
        cout << "Enter the height: ";
        cin >> height;
        // Triangle class instance
        Triangle t1;
        t1.getH(base, height); // access Triangle class method
        t1.decorate();
    } while (repeat());
    return 0;
}