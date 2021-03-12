#include "Person.h"
#include <iostream>
#include <array>

Person::Person()
{
    name[0];
    height = 0;
    weight = 0;
}

Person::Person(double newWeight, double newHeight, char newName[])
{
    weight = newWeight;
    height = newHeight;
    int size = *(&newName + 1) - newName;
    char name[size];

    for(int i = 0; i < size; i++)
    {
        name[i] = newName[i]; 
    }   
}

void Person::setHeight(double newHeight)
{
    height = newHeight;
}

double Person::getHeight()
{
    return height;
}

void Person::setWeight(double newWeight)
{
    weight = newWeight; 
}

double Person::getWeight()
{
    return weight;
}

void Person::setName(char newName[])
{
    int size = *(&newName + 1) - newName;
    char name[size];

    for(int i = 0; i < size; i++)
    {
        name[i] = newName[i];
    }
}

char* Person::getName()
{
    return name;
}

double Person::getRatio()
{
    return height/weight;
}