#include <iostream>
#include "FunString.h"

using namespace std;

int main()
{

    
    char word[] = "Hello";
    
    FunString test(word, 5);

    // for(int i = 0; i < test.size; i++)
    // {
    //     cout << test.chars[i];
    // }

    
    
    cout <<endl;
    
    cout << "data test: "<<test.data() << endl;
    cout << "append test: " << test.append(3,'b').data() << endl;

    char word2[] = {'c','a','t'};
    char word3[] = {'c','a','t'};
    FunString test3(word3,4);
    FunString test2(word2,4);
    cout << test3.data() << endl;
    cout << test2.data() << endl;   
    
    cout << "compare test: " << test.compare(test2) << endl;
    cout << "compare test 2: " << test3.compare(test2) << endl;

    if(test2.isAnagram(test3))
        cout << "it is anagram" << endl; 


}

