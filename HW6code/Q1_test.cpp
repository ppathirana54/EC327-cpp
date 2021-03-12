#include "Stack.h"
#include <iostream>

using namespace std;

int main()
{
    char word[] = "hello";
    int size = 5;

    char word2[] = "world";
    int size2 = 5;
    FunString test(word,size);
    FunString test2(word2, size2);

    cout << test <<endl;
    cout << test2 << endl;

    cout << test + test2 << endl;
    cout << (test == test2) << endl;
    cout << (test >= test2) << endl;

    char word3[] = "olleh";
    int size3 = 5;

    FunString test3(word3 ,size3);
    cout << (test == test3) << endl;

}