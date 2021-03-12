#include <iostream>
#include "Q2.h"
#include <iomanip>

using namespace std;



int main()
{
    cout << "test 1" << endl;
    cout << "1 2 3 4" << endl;

    int size1 = 4 ;
    int test1[size1] = {1,2,3,4} ;
    int* ptest1 = &test1[0];

    int* pout1 = QuadCapacity(ptest1, size1);
    
    for(int i = 0; i < 16; i++)
    {
        cout << *(pout1 + i) << endl;
    }


}