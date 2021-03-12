using namespace std;

class FunString
{
    public:
        int size;
        char chars[];


    //Constructor
    FunString(char chars[], int size);


    //appends n copies of charecter ch to this FunString
    FunString append(int n, char ch);

    //assigns the first n number of characters in s into this string,
    //starting from the first character in this string
    FunString assign(FunString s, int n);

    //returns a value greater than 0, 0, or less than 0 if this string is
    //greater than, equal to, or less than s, respectively
    int compare(FunString s) const;

    //compares this string with s(index,index+1,…,index+n-1)
    int compare(int index, int n, FunString s) const; 

    //returns a pointer to a char array that contains the same
    //sequence of characters as in this string object
    char* data() const; 

    //returns true if this string is an anagram(*) with s    
    bool isAnagram(const FunString &s) const;

    //returns the common suffix (**) of this string
    //and string s, if any. Returns an empty string otherwise

    FunString commonSuffix(const FunString &s) const;


};