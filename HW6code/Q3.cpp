#include<string>
#include<iostream>
#include<algorithm>
#include "Stack.h"

using namespace std;

bool parCheck(const string & expression)
{
    Stack<char> s;
    char in;
    char comp;

    char validChars[] = "+-*/(){}";


    for(int i=0; i < expression.length(); i++)
    {   
        in = expression[i];

        if(isdigit(in) || in == '+' || in == '-' || in == '*' || in == '/')
        {
            continue;
        }
        else if (in == ')' || in == '}')
        {
            if(s.isEmpty())
            {
                return false;
            }

            comp = s.pop();

            switch (in)
            {
            case ')':
                if(comp != '(')
                    return false;
                break;
            
            case '}':
                if(comp != '{')
                    return false;
                break;
            }
        }
        else if (in == '(' || in == '{')
        {
            s.push(in);
        }
        else
        {
            cout << "Error: Invalid Char" << endl;
            return false;
        }
    }

    return true;
}



int main()
{
    string expression;

    cin >> expression;

    if(parCheck(expression))
    {
        cout << "Correct Expression" << endl;
    }
    else
    {
        cout << "Incorrect Expression" << endl;
    }

    return 0;

}