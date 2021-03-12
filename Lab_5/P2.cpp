/* Include libraries and header files */
#include <iostream>
#include <string>
#include <ctype.h>
#include "minmax.h"

using namespace std;



//main function
int main()
{
    //variable definitions
    int numCount = 0;
    int arraySize = 10;
    int inVals[arraySize];
    std::string inString;
    std::string numIn;
   
   
    
    //Read 10 integers from the user. Ignore strings using the functions in minmax.h
    cout << "Please provide 10 integers:" << endl;

    while(numCount < arraySize)
    {
        cin >> inString; 

        if(isInteger(inString) == true)
        {
            inVals[numCount] = stoi(inString);
            numCount++;
        }
    }


    //print the minimum and maximum numbers in the array using the functions in minmax.h


    int max = getMax(inVals);
    int min = getMin(inVals); 

    cout << "Max: " <<  max << " Min: " << min << endl;


    return 0;
}
