#include "Stack.h"
#include <iostream>
using namespace std;

int main()
{
    Stack<int> test;

    test.push(1);

    int popTest = test.pop();
    cout << popTest <<endl;

    try
    {
        int popTest2 = test.pop();
    }
    catch(StackException& ex)
    {
        cout << ex.what(); 
    }

    
}