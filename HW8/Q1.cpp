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
    throw "exceeds 15 characters, skipping";
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
  string word;
  int linenumber = 1;

  ifstream myfile("words.txt");
  ofstream writefile("reversedwords.txt");

  while (getline(myfile, word))
  {
    if (!(word.length() == 0))
    {

      try
      {
        writefile << reverseString(word) << '\n';
      }
      catch (char const *e)
      {
        std::cerr << "Error: line " << linenumber << ": " << e << '\n';
      }

    }
      linenumber++;
  }
  myfile.close();
  return 0;
}
