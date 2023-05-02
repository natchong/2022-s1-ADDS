#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

class LinkedList {
    private:
    Node* head;
    
    public:
    LinkedList();
    LinkedList(int* array, int len);
    void insertFront(int newItem);
    void insertEnd(int newItem);
    void insertPosition(int pos, int newNum);
    int search(int target);
    void deleteFront();
    void deleteEnd();
    bool deletePosition(int pos);
    int get(int pos);
    void printList();
    ~LinkedList();

};
#endif