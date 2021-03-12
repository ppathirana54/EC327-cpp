#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double input;

    cout << "Enter a fractional number: ";
    cin >> input;


    int power = 0;

    while (input < 1 || input > 10)
    {
        if (input < 1)
            {
                input = input * 10;
                power--;
            }
        else if (input > 10)
        {
            input = input/10;
            power ++;
        }
    }

    cout << "In normalized form:" <<endl;
    cout << "Mantissa: "  << fixed << setprecision(3) << input;
    cout << " Exponent: " << power <<endl;

    return 0;
}