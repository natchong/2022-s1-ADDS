#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

class LinkedList {
    private:
    Node* head;
    
    public:
    LinkedList();
    int length;
    LinkedList(int* array, int len);
    void insertPosition(int pos, int newNum);
    int search(int target);
    bool deletePosition(int pos);
    int get(int pos);
    void printList();
    ~LinkedList();

};
#endif