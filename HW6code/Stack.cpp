#include "Stack.h"
#include <string>

using namespace std;

template<typename T>
Stack<T>::Stack()
{
    int max = 25;
    size = 0;
    elements = new T[25];
}

template<typename T>
bool Stack<T>::isEmpty() const
{
    return size == 0;
}

template<typename T>
void Stack<T>::push(T value)
{
    elements[size] = value;
    size++;
}

template<typename T>
T Stack<T>::pop()
{
    return elements[--size];
}

template<typename T>
int Stack<T>::getSize() const
{
    return size;
}

