#include <iostream>
#include "LinkedList.h"
#include <vector>
//include other files as needed
//



using namespace std;

//Put UniqueList class here
//
class UniqueList : public LinkedList<int>
{
  public:
  void insert(int x)
  {
    bool isUnique = true;
    vector<int> numList;

    Node<int>* temp;
    temp = head;
    int checkedNumber;

    while(temp != NULL)
    {
      checkedNumber = temp->element;
      numList.push_back(checkedNumber);
      temp = temp ->next;
    }
    
    for(int i = 0; i < numList.size(); i++)
    {
      if(x == numList[i])
        {
          isUnique = false;
          break;
        }
    }

    if(isUnique)
    {
      this->addLast(x);
    }
  }


};

int main()
{
  //Uncomment once UniqueList class is created
  //DO NOT modify the test code
  
  UniqueList myList;
  //attempts to insert each integer from 0 to 49 twice
  for(int i = 0; i < 100; i++){
    myList.insert(i/2);
  }
  //checking inserted elements
  if(myList.getSize() > 50){
    cout << "Error: Inserted too many numbers."
         << " You should insert only if x does not already exist!\n";
    return -1;
  } else if(myList.getSize() < 50){
    cout << "Error: Inserted too few numbers.\n";
    return -1;
  }
  for(int i = 0; i < 50; i++){
    int next;
    if((next = myList.removeFirst()) != i){
      cout << "Error: Encountered " << next << " when expecting " << i << "!\n";
      return -1;
    }
  }
  cout << "Insert function has passed the test!\n";





  // Put the additional test code here if needed
  //






  return 0;
}

