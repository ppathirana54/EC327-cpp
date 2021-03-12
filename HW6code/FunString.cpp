#include "FunString.h"
#include <string>
#include <cstring>
#include <algorithm>
#include <iostream>

FunString::FunString(char chars[], int size)
{
    str = new char[size + 1];
    memcpy(str, chars, size);
    str[size] = '\0';
    len = size;
}

FunString FunString::append(int n, char ch)
{
    char* newstr = new char[n+this->len];
    
    for(int i=0; i<this->len;i++)
    {
        newstr[i] = this->str[i];
    }
    
    delete [] str;
    
    for(int i=0; i<n;i++)
        strncat(newstr,&ch,1);
    
    this->str = newstr;
    len += n;
    this->str[len] = '\0';
    return *this;
}

FunString FunString::assign(FunString s, int n)
{
    for(int i=0; i<n; i++)
    {
        this->str[i] = s.str[i];
    }
    this->len = n;
    
    this->str[len]='\0';
    
    return *this;
}

int FunString::compare(FunString s) const
{
    return strcmp(str, s.str);
}

int FunString::compare(int index, int n, FunString s) const
{
    char* sNew = new char [n+1];
    strncpy(sNew, &(s.str[index]), n);
    sNew[n] = '\0';
    return strcmp(str, sNew);
    
}

char * FunString::data() const
{
    return this -> str;
}

bool FunString::isAnagram(const FunString &s) const
{
    /* sort characters of both strings, then check equality */
    if (len != s.len)
        return false;
    
    char *buf1 = new char[len];
    char *buf2 = new char[len];
    memcpy(buf1, str, len);
    memcpy(buf2, s.str, len);
    sort(buf1, buf1 + len);
    sort(buf2, buf2 + len);
    
    bool result = (memcmp(buf1, buf2, len) == 0);
    delete[] buf1;
    delete[] buf2;
    return result;
}

FunString FunString::commonSuffix(const FunString &s) const
{
    int minSize = this->len;
    if (this->len > s.len)
        minSize = s.len;
    int count = 0;
    for (int i = 1; i <= minSize; i++) {
        if (this->str[this->len - i] == s.str[s.len - i]) {
            count++;
        }
    }
    char temp[count];
    FunString suffix(temp,count);
    for (int i = 0; i < count; i++) {
        suffix.str[i] = s.str[s.len-count+i];
    }
    return suffix;
}

char FunString::operator[](int n)
{
    return str[n];
}

FunString FunString::operator+(FunString s)
{
    FunString returnString(strncat(str,s.str, s.len) , len + s.len);
    return returnString;
}

bool FunString::operator==(FunString s)
{
    return isAnagram(s);
}


bool FunString::operator>=(FunString s)
{
    int temp = compare(s);
    if(temp >= 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

ostream& operator<<(ostream& out, const FunString& s)
{
    out << s.data();

    return out;
}

istream& operator>>(istream& in,  FunString s)
{
    string expression; 
    in >> expression;

    int len = expression.length();
    
    char newStr[len + 1];

    strcpy(newStr, expression.c_str());

    s.len = len;
    s.str = newStr;    

    return in;
}
