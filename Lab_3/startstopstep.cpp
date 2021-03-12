#include <iostream>

using namespace std;

int main()
{
    int start; int stop; int step;

    do
    {
        cout << "start = ";
        cin >> start;
        
        cout << "stop = " ;
        cin >> stop ;

        cout << "step = ";
        cin >> step ;

        if(start < stop)
        {
            for (int i = start; i <= stop; i = i + step)
            {
                 cout << i ; 
                 if (i < stop)
                 {
                 cout << "," ;
                 }

            }

        }

        else if(start > stop)
        {
            for (int i = start; i >= stop; i = i - step)
            {
                 cout << i ; 
                 if (i > stop)
                 {
                 cout << "," ;
                 }

            }

        }

        else
        {
            cout << "Bye, bye!" << endl;
        }
        
        cout << endl;


    } while (start != stop);

    return 0;

}