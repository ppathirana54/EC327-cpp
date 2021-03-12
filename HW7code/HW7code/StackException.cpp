#include "StackException.h"


 static const char returnChars[] = "There are no items on stack!";

 const char * StackException::what() const throw()
 {
    return returnChars;
 }
