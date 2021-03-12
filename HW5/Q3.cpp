#include <iostream>
#include <string>
#include <fstream>
#include "Q3.h"

using namespace std;

void findExpression(int N, string & expr)
{
    ifstream input("words.txt");

    string * words = new string[N];
    string * contains = new string[N];
    int containsCount = 0;
    int pos;

    for(int i = 0; i < N; i++)
    {
        input >> words[i];
        pos = words[i].find(expr);

        if(pos < words[i].length() + 1)
        {
            contains[containsCount] = words[i];
            containsCount++;
        }
    }

    string temp;
    for(int i = 0; i < containsCount+1; i++)
    {
        for(int j = i+1; j < containsCount+1; j++)
        {
            if(contains[i].compare(contains[j]) > 0)
            {
                temp = contains[i];
                contains[i] = contains[j];
                contains[j] = temp; 
            }
        }
    }    

    ofstream output("output.txt");

     for(int i = 0; i < containsCount+1; i++)
    {
        output << contains[i] << endl;
    }
    
    output.close();
    input.close();
}