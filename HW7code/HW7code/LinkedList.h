#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdexcept>
using namespace std;

//In LinkedList.h you may change the instances of <typename R> into <typename T> (and other instances of R into T) if you wish. (optional)
//Please do not make any other changes in this file.

template<typename T>
class LinkedList
{

    public:
        LinkedList();
        ~LinkedList();
        void addFirst(T element);
        void addLast(T element);
        T getFirst() const throw (runtime_error);
        T getLast() const throw (runtime_error);
        T removeFirst() throw (runtime_error);
        T removeLast() throw (runtime_error);
        int getSize();
        
    protected:
        template<typename R>
        class Node;
        Node<T>* head;
        Node<T>* tail;
        int size;

    template<typename R>
    class Node
    {
        public:
            R element;
            Node<R>* next;
            Node(){ //no-arg constructor
                next = NULL;
            }
            Node(R element){ //constructor
                this->element = element;
                next = NULL;
            }
    };
};

#endif
