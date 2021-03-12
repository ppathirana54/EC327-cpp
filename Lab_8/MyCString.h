#ifndef _MYCSTRING_H
#define _MYCSTRING_H 1


//DO NOT CHANGE THIS FILE


class MyCString{
public:
    //constructor
    //creates an empty c-string
    MyCString();

    //Adds the input character to the string
    //If there is no space in the c-string, returns false
    //otherwise, adds the character and returns true
    bool addChar(char input);

    //Remove the last character in the string
    //returns false if the character is empty
    bool removeChar();

    //prints the current string
    void print();

private:
    char myString[6]; //The 6th character is required for the null terminator '\0'
};

#endif