#include <iostream>
#include <vector>
#include <algorithm>
//add other libraries if needed

using namespace std;


vector<string> split(const string &expression) {

    vector<string> returnVector;
    string input = expression;
    string term;
    string operatorIn;

    for(int i=0; i < expression.length(); i++)
    {   
        if(isdigit(expression[i]))
        {
            term = term + expression[i];
        }
        else if ( expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/')
        {
          returnVector.push_back(term);
          operatorIn = expression[i];
          returnVector.push_back(operatorIn);
          term.clear();
          operatorIn.clear();
        }
        else
        {
            continue;
        }
    }

    returnVector.push_back(term);

    reverse(returnVector.begin(), returnVector.end());

    
    return returnVector;

}

 
int main () {
  //test code: 
  //ask the user to enter an expression
  //call the split function
  //display the split items (numbers and operands) on the console
  string expression;
  string output;

  cin >> expression;
  
  vector<string> splitExpressions = split(expression);

  while(!splitExpressions.empty())
  {
    cout << splitExpressions.back() << endl;
    splitExpressions.pop_back();
  }

  //add more test cases if needed

  return 0;
}
