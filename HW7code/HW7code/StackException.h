#ifndef STACKEXCEPTION_H
#define STACKEXCEPTION_H

#include <exception>
#include <stdexcept>
using namespace std;

struct  StackException : public exception
{

    public:
        virtual const char * what() const throw();     
};

#endif