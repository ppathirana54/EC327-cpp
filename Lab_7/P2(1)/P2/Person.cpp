//proper includes go here
#include "Person.h"
#include "iostream"

//Write the Person Constructor here. See Person.h for input arguments
//be sure to initialize buddy and enemy as NULL in the constructor
Person::Person(int init_income, double init_tax_rate, string init_name)
{
    income = init_income;
    tax_rate = init_tax_rate;
    name = init_name;
    enemy = NULL;
    buddy = NULL;
}

//write the calc_takehome_pay function here. 
int Person::calc_takehome_pay()
{
    return income - tax_rate*income;
}


//write the enemy_or_buddy function here. See problem statement for proper arguments

void Person::enemy_or_buddy(Person* P1)
{
    int buddyPay = P1->calc_takehome_pay();
    int pay = calc_takehome_pay();

    if(buddyPay > pay)
    {
        buddy = P1;
    }
    else
    {
        enemy = P1;
    }
}



//write the print_status function here
void Person::print_status()
{
    if(buddy == NULL)
    {
        cout << "No Buddy!" << endl;
    }
    else
    {
        cout << "Buddy: " << buddy->name << endl;
    }
    
    if (enemy == NULL)
    {
        cout << "No Enemy!" << endl;
    }
    else
    {
        cout << "Enemy: " << enemy->name << endl;
    }
    

}
