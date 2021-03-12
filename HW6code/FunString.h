#ifndef __FunString__
#define __FunString__

#include <iostream>

using namespace std;

class FunString {

public:
    char *str;
    int len;

    FunString(char chars[], int size);
    FunString append(int n, char ch);
    FunString assign(FunString s, int n);
    int compare(FunString s) const;
    int compare(int index, int n, FunString s) const;
    char * data() const;
    bool isAnagram(const FunString &s) const;
    FunString commonSuffix(const FunString &s) const;

    //Overloaded operators [] + >= ==
    char operator[](int n);
    FunString operator+(FunString s2);
    bool operator==(FunString s);
    bool operator>=(FunString s);



    //Overloaded stream operators
    friend ostream& operator<<(ostream& , const FunString&);
    // friend istream& operator>>(istream& in, const FunString& s);
};

#endif /* defined(__FunString__) */
