#include <iostream>
#include <string>
#include "Q2.h"
#include <algorithm>

using namespace std;

Rectangle::Rectangle(int width, int height, int x, int y)
{
    this->width = width;
    this->height = height;
    this->x = x;
    this->y = y;
};

int Rectangle::getHeight() const
{
    return height;
}

int Rectangle::getWidth() const
{
    return width;
}

string Rectangle::getCoordinates() const
{
    string returnString;
    stringstream ss;
    ss << x << "," << y;
    returnString = ss.str();

    return returnString;
}

int Rectangle::getOverlapArea(const Rectangle &r) const
{
    string rcoords = r.getCoordinates();
    int comma = rcoords.find(",");
    string rx_string = rcoords.substr(0,comma); 
    string ry_string = rcoords.substr(comma+1, rcoords.back()); 
    int rx = stoi(rx_string); //x coord r
    int ry = stoi(ry_string); // y cood r
    int rw = r.getWidth(); // width r
    int rh = r.getHeight(); // height r
     
    //determines if they intersect

    int bot = y;
    int top = y + height;
    int left = x;
    int right = x + width; 

    int rbot = ry;
    int rtop = ry + rh;
    int rleft = rx;
    int rright = rx + width;

    
    bool intersects = !(left > rright || rleft > right || rbot > top || bot > rtop);
    
    if(intersects)
    {
        int horizontal[] = {left , right ,rleft, rright} ;
        int vertical[] = {bot , top , rbot, rtop} ;

        sort(horizontal, horizontal+4);
        sort(vertical, vertical+4);

        int intersectx = horizontal[2] - horizontal[1];
        int intersectsy = vertical[2] - vertical[1];

        return intersectx * intersectsy;
        
    }
    else{ return 0;}



    return 0;
}

//Hint:
//To convert integers to strings, you can use stringstream if you like:
//int a = 10;
//stringstream ss;
//ss << a;
//string str = ss.str();

int main()
{
    //Uncomment once Rectangle class is created
    //DO NOT modify the test code

    Rectangle r1(4, 3, 0, 0), r2(2, 1, 3, 0); // (width, height, x, y)

    cout << "Overlap area of a rectangle with height "
         << r1.getHeight() << " and width " << r1.getWidth()
         << " at coordinates " << r1.getCoordinates()
         << " and a rectangle with height "
         << r2.getHeight() << " and width " << r2.getWidth()
         << " at coordinates " << r2.getCoordinates()
    << " is: " << r1.getOverlapArea(r2) << endl;

    //This code should print on the console:
    //Overlap area of a rectangle with height 3 and width 4 at coordinates 0,0 and a rectangle with height 1 and width 2 at coordinates 3,0 is 1

    //Put your additional test code here
    /*Follow the sample run:
  "Enter height, width, x coordinate, and y coordinate of a rectangle:"
  <user enters four numbers separated by spaces and hits enter>
  Enter height, width, x coordinate, and y coordinate of another rectangle:
  <user enters four numbers separated by spaces and hits enter>
  Overlap area: ... */

    return 0;
}
