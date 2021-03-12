#ifndef STACK_H
#define STACK_H

#include<string>

using namespace std; 
template<typename T>
class Stack
{
 public:
    Stack(); //constructor
    bool isEmpty() const; //returns true if stack is empty, false otherwise
    void push(T value); //add a new item of type T and value value to the
    //stack if there is still space on the stack
    T pop(); //return top element on the stack,
    //remove the returned item from stack
    int getSize() const; //return the size of the stack
    
    private:
    T * elements; //pointer to elements of the stack
    int size; //current size of stack
};

#include "Stack.tpp"

#endif 