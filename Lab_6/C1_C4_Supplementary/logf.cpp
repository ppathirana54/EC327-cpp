#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float num, lognum;
    cout << "*Log Finder*" << endl;
    cout << "Please enter a number:";
    cin >> num;
    if(num >= 0){ //computes log only for positive numbers
        lognum = logf(num);
    } else {
        cout << "You entered a negative number!" << endl;
    }
    cout << "The natural logarithm of " << num << " is " << lognum << "." << endl;
    return 0;
}
