#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int* countDigits(const int list[], int arraySize);

//DO NOT MODIFY THE MAIN FUNCTION
int main(){
    //prompt for array size
    int arraySize = -1;
    cout << "Enter array size:";
    while(1){
        cin >> arraySize;
        if(arraySize <= 0){
            cout << "Enter a positive array size:";
        } else {
            break;
        }
    }

    int randoms[arraySize]; //array to hold random integers

    //populate & print array
    srand(time(0));
    randoms[0] = 0;
    cout << "Array: 0 ";
    for(int i = 1; i < arraySize; i++){
        randoms[i] = rand() % 50;
        cout << randoms[i] << " ";
    }
    cout << endl;

    //get function result
    int* occurrences = countDigits(randoms, arraySize);   
    //print
    cout << "Digit\tOccurrence" << endl;
    for(int i = 0; i < 10; i++){
        cout << i << "\t" << occurrences[i] << endl;
    }

    //clear memory
    delete [] occurrences;

    return 0;
}

int* countDigits(const int list[], int arraySize){
    //implement here
}
