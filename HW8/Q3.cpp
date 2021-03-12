#include <iostream>
#include <typeinfo>
using namespace std;

class Dessert
{
public:
    Dessert()
    {
        calories = 10;
    }

    virtual ~Dessert()
    {
        cout << "Destroying a dessert. How horrible!" << endl;
    }
    //Add destructor here
    //Use the following cout statement
    //cout << "Destroying a dessert. How horrible!" << endl;

    double getCalories()
    {
        return calories;
    }

    void printDetails()
    {
        cout << "Calories of " << typeid(this).name() << " : " << calories << "\n";
        return;
    }

protected:
    double calories;
};

//Put Tiramisu class here
//Keep the cout statement as the only thing in the destructor
//cout << "Destroying a Tiramisu. You monster!" << endl;
class Tiramisu : public Dessert
{
public:
    ~Tiramisu()
    {
        cout << "Destroying a Tiramisu. You monster!" << endl;
    }
};

//Add non-member eat function here
//cout << "Ate dessert!" << endl; // If you can eat it
//cout << "You can't eat a generic dessert!" << endl; //if you can't eat it

void eat(Dessert *ptr)
{


    if (dynamic_cast<Tiramisu*>(ptr))
    {
        cout << "Ate dessert!" << endl;
    }
    else
    {
        cout << "You Can't Eat A Generic Dessert!" << endl;
    }
}

int main()
{
    Dessert *dPtr = new Dessert;
    dPtr->printDetails();

    //Uncomment once Tiramisu class is created
 
    //add a line here for to make tPtr for Tiramisu object
    //
    //
    //
    Tiramisu *tPtr = new Tiramisu;
    tPtr->printDetails();
    eat(tPtr);

    eat(dPtr);

    delete tPtr;

    delete dPtr;

    return 0;
}
