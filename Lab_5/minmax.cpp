/* Include libraries and header files */
#include <string>
#include <ctype.h>

bool isInteger(std::string inString)
{
    int len = inString.length();
    bool isNum = true;
    bool isNeg = false;

    for(int i = 0; i < len; i++)
    {
        if(isdigit(inString[i]))
        {
           isNeg = false;

        }
        else if(inString[i] == '-')
        {
            if(isNeg == false)
            {
                isNeg == true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
        

    }

     return true;
}

int getMin(int inVals[])
{
    int len = 10;
    int min = inVals[0];

    for(int i = 0; i < len; i++)
    {
        if(min > inVals[i])
        {
            min = inVals[i];
        }
    }

    return min;

}

int getMax(int inVals[])
{
    int len = 10;
    int max = inVals[0];

    for(int i = 0; i < len; i++)
    {
        if(max < inVals[i])
        {
            max = inVals[i];
        }
    }

    return max;

}



/* Define the functions that are declared in minmax.h */

