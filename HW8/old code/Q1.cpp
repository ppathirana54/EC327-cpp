#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

string reverseString(const string &s1)
{
    string s1_reversed;

    if (s1.length() > 15)
    {
        throw " exceeds 15 characters, skipping\n";
    }
    else
    {
        s1_reversed = s1;
        reverse(s1_reversed.begin(), s1_reversed.end());
        return s1_reversed;
    }
}

int main()
{
    //Write your program here
    //Include following message for error handling:
    //cout << "Error: line:" << lineNo << " exceeds 15 characters, skipping\n";

    string word;
    int lineNo = 1;

    ifstream myfile("words.txt");
    ofstream writefile("reversedwords.txt");

    if (myfile.is_open())
    {
        while (getline(myfile, word))
        {
            if (!word.empty())
            {

                try
                {
                    writefile << reverseString(word) << '\n';
                }
                catch (const char *e)
                {
                    cout << "Error: line:" << lineNo << e;
                }
            }

            lineNo++;
        }
        myfile.close();
    }
}