//include libraries and files
#include "MyCString.h"
#include <iostream>
using namespace std;

int main(){
    MyCString myString;

    char input; 
    char inputChar;
    bool success;

    while(input != 'q')
    {
        cin >> input;
        switch (input)
        {
        case 'a':
            cin >> inputChar;
            success = myString.addChar(inputChar);

            if(!success)
            {
                cout << "Cannot add more characters" <<endl;
            }
            break;
        

        case 'r':
            success = myString.removeChar();

            if(!success)
            {
                cout << "The string is empty" <<endl;
            }
            break;

        case 'p':
            myString.print();
            break;
        default:
            cout << "Exiting" <<endl;
        }
    }
}
