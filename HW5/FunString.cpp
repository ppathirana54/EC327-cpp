#include "FunString.h"
#include <iostream>
#include <array>

FunString::FunString(char init_chars[], int init_size)
{
    chars[init_size];
    size = init_size; 

    for(int i = 0; i < size; i++)
    {   
        chars[i] = init_chars[i]; 
    }
}   

FunString FunString::append(int n, char ch)
{
    int newSize = size + n;
    char newString[newSize];

    for(int i = 0; i < size; i++)
    {
        newString[i] = chars[i];
    }

    for(int i = 0; i < n; i++)
    {
        newString[size + i] = ch;
    }

    size = newSize;
    
    char chars[size];

    // cout << endl;
    // cout << "Inside Function?"; 

    for(int i = 0; i < size; i++)
    {
        chars[i] = newString[i];
        //cout << chars[i];
    }

    FunString returnString(newString,newSize);

    return returnString;
}

FunString FunString::assign(FunString s, int n)
{   
    char newString[size];

    for(int i = 0; i < n; i++)
    {
        newString[i] = s.chars[i];
    }
    for(int i = n; i <size; i++)
    {
        newString[i] = chars[i];
    }
    FunString returnString(newString, size);
    return returnString;
}

char* FunString::data() const
{
    char *returnChars = new char[size];
    
    for(int i = 0; i < size; i++)
    {
        returnChars[i] = chars[i];  
    }

    return returnChars;

}

bool FunString::isAnagram(const FunString &s) const
{
    char chars1[size];
    char chars2[s.size];

    int charCount1[52] = {0};
    int charCount2[52] = {0};

    for(int i = 0; i < size; i++)
    {
        charCount1[chars1[i] - 'a']++ ; 
    }
    for(int i = 0; i < s.size; i++)
    {
        charCount2[chars2[i] - 'a']++ ; 
    }

    for(int i = 0; i < 52; i++)
    {
        if(charCount1[i] != charCount2[i])
            return false;
    }
    return true;
}

int FunString::compare(FunString s) const
{
    int count;
    if(size < s.size)
    {
        count = size;
    }
    else
    {
        count = s.size;
    }

    int diff;

    for(int i=0; i < count; i++)
    {
        diff = chars[i] - s.chars[i];
        // cout << "Inside" << endl;
        // cout << "char " <<  chars[i] << endl;
        // cout << "char " << s.chars[i] << endl;
        // cout << "diff: " << diff << endl;
        // cout << "outside";

        if(diff != 0)
            return diff;    
    }

    return 0;
}

int FunString::compare(int index, int n, FunString s) const
{   
    int diff;
    
    for(int i= index; i < index+n; i++)
    {
        diff = chars[i] - s.chars[i];

        if(diff != 0)
            return diff;    
    }

    return 0;    

}

FunString FunString::commonSuffix(const FunString &s) const
{
    int count;
    if(size < s.size)
    {
        count = size;
    }
    else
    {
        count = s.size;
    }

    int diff = 0;
    int lenSuffix = 0;

    for(int i = count-1; i >= 0; i--)
    {
        diff = chars[i] - s.chars[i];

        if(diff == 0)
        {
            lenSuffix++;
        }
        else 
         break;
        
    }

    char returnChars[lenSuffix];

    for(int i = 0; i < lenSuffix; i++)
    {
        returnChars[i] = chars[size-1-i];
    }


    FunString returnString(returnChars,lenSuffix);

    return returnString;
}