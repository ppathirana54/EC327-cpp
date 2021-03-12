//include libraries and files
#include "MyCString.h"
#include <iostream>
using namespace std;

MyCString::MyCString()
{
    for(int i = 0; i < 6; i++)
    {

       myString[6] = '\0';

    }
}

bool MyCString::addChar(char input)
{

    for (int i = 0; i < 6; i++)
    {
        if(i == 6)
        {
            return false;
        }
        if (myString[i] == '/0')
        {
            myString[i] = input;
            break;
        }
        
    }

    return true;
}

bool MyCString::removeChar()
{
    for(int i = 4; i >= 0; i ++)
    {   
        cout << i << endl;
        if(myString[i] != '\0')
        {
            myString[i] = '/0';
            break;
        }
        else if (i == 0)
        {
            return false;
        }
    }

    return true;
}

void MyCString::print()
{
    for (int i = 0; i < 6; i++)
    {
        cout << myString[i];
    }
    cout << endl;
}