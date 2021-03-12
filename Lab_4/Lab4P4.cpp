#include <iostream>
#include "cashier.h"
#include <iomanip>

using namespace std;

int main()
{
    char more;
    double total = 0;
    double newItem;
    char kind;
    int people;

    do
    {   
        cout << "What is the amount? $";
        cin >> newItem; 

        cout << "Is it (f)ood or (l)iquor?";
        cin >> kind;

        total = total + tax(newItem, kind);

        cout << "Do you have more items? (y/n)";
        cin >> more;

    }while(more == 'y');

    cout << "How many people are you splitting this with?" ;
    cin >> people; 

    cout<< "Your total will be $" << std::setprecision(2) << fixed << split(total,people) <<" per person." << endl;

    return 1;
}