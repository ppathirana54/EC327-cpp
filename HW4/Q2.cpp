#include <iostream>

using namespace std; 

int* QuadCapacity(int* list, int size)
{
    
    int newList[4 * size];

    for(int i = 0; i < size; i++)
    {
        newList[i] = *(list + i);
        cout << newList[i] << endl;
    }

    for(int i = size; i < 4* size; i++)
    {
        newList[i] = 0;
        cout << newList[i] << endl;
    }

    int* pnewList = &newList[0];
    return pnewList; 
}