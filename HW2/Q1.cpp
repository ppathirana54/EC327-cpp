#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int x1; int x2; int y1; int y2; int r1; int r2;


    cout << "Enter the coordinates and radius for the first circle" <<endl;
    cout << "x: ";
    cin >> x1;

    cout << "y: ";
    cin >> y1;

    cout << "r: " ;
    cin >> r1;


    cout << "Enter the coordinates and radius for the second circle" <<endl;
    cout << "x: " ;
    cin >> x2;


    cout << "y: ";
    cin >> y2;


    cout << "r: " ;
    cin >> r2;

    //calcualtes x and y distance//
    int delta_x = x1-x2; 
    int delta_y = y1-y2; 

    //finds min distance between circles and determines if they overlap
    double distance = sqrt(pow(delta_x,2) + pow(delta_y, 2));
    distance = distance - r2 - r1;

    //logical conditional to detemrine output
    if (distance < 0)
    {
    cout << "THE CIRCLES OVERLAP." <<endl; 
    }
    else
    {
        cout << "THE MINIMUM DISTANCE BETWEEN THE CIRLCES IS " << distance <<endl;
    }
    return 0;
}
