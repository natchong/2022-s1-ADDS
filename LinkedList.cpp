#include "LinkedList.h"
#include "Node.h"
#include <limits>
#include <iostream>

//default constructor
LinkedList::LinkedList() {
    head=nullptr;
    length = 0;
}

//C-array of len 
LinkedList::LinkedList(int* array, int len) {
    head=nullptr;
    length = len - 1;

    for (int i=length ;i >= 0; i--) {
        Node* newNode = new Node(array[i], head);
        head = newNode;
    }
}

//insert a new node into specified pos
void LinkedList::insertPosition(int pos, int newNum) {
    Node* newNode = new Node(newNum, nullptr); //a new node in a entered pos

    //with a pos of 1 or less than 1, new node will be inserted at head
    if (pos <= 1) {
        newNode->link = head;
        head = newNode;
        length++;
        return;
    }
        Node* previous = head;
        for(int i=1; i<pos-1 && previous->link != nullptr; i++){
            previous = previous->link;
        }

        if (previous->link == nullptr){
            previous->link = newNode;
            length++;
            return;
        }

        newNode->link = previous->link;
        previous->link = newNode;
        length++;
}


//search for target and return position
int LinkedList::search(int target) {
    int searchPosition=1;
    Node* current = head;
    while (current != nullptr) {
        if (current->data == target) {
            return searchPosition;
        }
        current = current->link;
        searchPosition++;
    }
    
    //return -1 if not found
    return -1;
}

//returns false if have not delete the element, return true otherwise
bool LinkedList::deletePosition(int pos) {

    //if pos out of bounds, return false
    if (pos > length || pos < 1){
        return false;
    }

    //find node
    Node* previous = head;
    for(int i=1; i<pos-1 && previous->link != nullptr; i++){
        previous = previous->link;
    }

    //set node as target so can be deleted
    Node* targetNode = previous->link;
    previous->link = targetNode->link;

    //delete node and return true
    delete targetNode;
    return true;
      
}

//get the position of the specified number and return
int LinkedList::get(int pos) {

    //pos out of bounds, return std::numeric limits...
    if(pos > length || pos < 1){
        return std::numeric_limits < int >::max();
    }

    Node* targetNode = head;
    for(int i=1; i < pos && targetNode->link != nullptr; i++){
        targetNode = targetNode->link;
    }

    //return the pos of node
    return targetNode->data;
}

//print the list of data
void LinkedList::printList() {
    Node* current = head;

    if (current==nullptr) {
        return;
    } 
    std::cout << "[";

    while (current != nullptr){
        std::cout << current->data;
        current = current->link;
        if(current != nullptr){
            std::cout << " ";
        }
    }
    std::cout <<"]" << std::endl;
}

//destructor
LinkedList::~LinkedList() {
    if (head!=nullptr) {
        Node* temp = head;
        head = head->link;
        delete temp;
    }
}