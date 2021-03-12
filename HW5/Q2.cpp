#include <iostream>
#include <fstream>
#include "Person.h"

using namespace std;

int main()
{
    ifstream input("people.txt");

    int numPeople;
    double weight;
    double height;
    string nameIn;
    Person myPerson;

    input >> numPeople;

    Person * myPeople = new Person[numPeople];
    

    for(int i = 0; i < numPeople; i++)
    {
        input >> height >> weight >> nameIn;
        // cin >> weight;
        // cin >> height;
        // cin >> nameIn;
        cout << "weight: " << weight <<" height: " << height<< " name: " << nameIn;
        cout << endl;

        int len = nameIn.length();
        char name[len];

        for(int k = 0; k < len; k++)
        {
            name[k] = (char)nameIn[k];
        }

        myPeople[i].setWeight(weight);
        myPeople[i].setHeight(height);
        myPeople[i].setName(name);


    }

    cout << myPeople[0].getName();
    int order[numPeople];

    for(int i = 0; i < numPeople; i++)
    {
        order[i] = i;
    }
    
    int temp;
    for(int i = 0; i < numPeople+1; i++)
    {
        for(int j = i+1; j < numPeople+1; j++)
        {
            if(myPeople[i].getRatio() < myPeople[j].getRatio())
            {
                temp = order[i];
                order[i] = order[j];
                order[j] = temp; 
            }
        }
    }    

    for(int i = 0; i< numPeople; i ++)
    {
        cout << myPeople[order[i]].getName() << "\t" << myPeople[order[i]].getRatio() << endl;
    }
    

}