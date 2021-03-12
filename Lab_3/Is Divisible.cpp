#include <iostream>

using namespace std;

int main()
{
    int input; 

    do
    {
        cout << "What number would you like me to check? " ;
        cin >> input;

        int factor_count = 0;

        if(input < 0)
        {
            cout << "I don't deal with negativity.";
        }

        else 
        {

            for (int i = 1; i <= input; i++)
            {
                if(input%i == 0)
                {
                    factor_count++;
                    cout << i << ",";
                }

            }
        }
        
        cout << endl;

        if (factor_count == 2)
        {   
            cout << "This number is Prime!" << endl;
        }

    } while(input > 0);

    return 0;
}