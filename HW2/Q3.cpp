#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    int num1; int num2;
    cout << "Enter two non-negative integers" << endl;
    cin >> num1;
    cin >> num2;

    int a = num1 ^ num2;
    std::bitset<32> ans(a);
 
    bool different = false;
    int hex_count = 0;


    for (int i = 0; i < 32; i++)
    {
        if(ans[i] == 1)
        {
            different = true;
        }
        if (((i + 1)% 4) == 0 && different)
        {
            hex_count ++;
            different = false;
        }

    }

    cout << "These numbers differ in " << hex_count << " hex digits." << endl;

    return 0;
}