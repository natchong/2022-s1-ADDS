#include "LinkedList.h"
#include "Node.h"
#include <limits>
#include <iostream>

//default constructor
LinkedList::LinkedList() {
    head=nullptr;
}

//C-array of len 
LinkedList::LinkedList(int* array, int len) {
    head=nullptr;
    for (int i=0;i<len;i++) {
        insertEnd(array[i]);
    }
}

//insert node to front of list
void LinkedList::insertFront(int newNum) {
    if (head==nullptr) {
        head = new Node(newNum);
    }
    else {
        Node* temp = new Node (newNum);
        temp->setNext(head);
        head=temp;
    }
}

//insert node to end of list
void LinkedList::insertEnd(int newNum) {
    if (head==nullptr) {
        head = new Node(newNum);
    }
    else {
        Node* newNode= new Node(newNum);
        Node* temp=head;
        while(temp->getNext()!=nullptr) {
            temp=temp->getNext();
        }
        temp->setNext(newNode);
    }
}

//insert a new node into specified pos
void LinkedList::insertPosition(int pos, int newNum) {
    if (pos<1) {
        insertFront(newNum);
    }
    else {
        Node* temp=head;
        int i=1;
        while (temp->getNext()!=nullptr && i<pos-1) {
            temp=temp->getNext();
            i++;
        }
        if (temp->getNext()==nullptr) {
            insertEnd(newNum);
        }
        else {
            Node* n_node=new Node(newNum);
            n_node->setNext(temp->getNext());
            temp->setNext(n_node);
        }
    }
}

//search for target and return position, not found return -1;
int LinkedList::search(int target) {
    int searchPosition=1;
    Node* temp=head;
    while (temp!=nullptr) {
        if (temp->getData()==target) {
            std::cout<<searchPosition<<" ";
            return searchPosition;
        }
        searchPosition++;
        temp=temp->getNext();
    }
    std::cout<<"-1";
    return -1;
}

//deleted the first index of list
void LinkedList::deleteFront() {
    if (head!=nullptr) {
        Node* temp=head;
        head=head->getNext();
        delete temp;
    }
}

//delete last element of list
void LinkedList::deleteEnd() {
    if (head!=nullptr) {
        Node* before=head,*current=head;
        while (current->getNext()!=nullptr) {
            before=current;
            current=current->getNext();
        }
        before->setNext(nullptr);
        delete current;
    }
}

//returns false if have not delete the element, return true otherwise
bool LinkedList::deletePosition(int pos) {
    if (pos <= 0 || head == nullptr){
        return false;
    } else if (pos ==1){
        Node* temp = head;
        head = head->getNext();
        delete temp;
        return true;
    } else {
        Node* previous = head;
        for (int i=1; i<pos-1 && previous->getNext() != nullptr; i++){
            previous = previous->getNext();
        }
        if (previous->getNext() == nullptr){
            return false;
        } else {
            Node* temp = previous->getNext();
            previous->setNext(temp->getNext());
            delete temp;
            return true;
        }
    }
}

//get the position of the specified number and return
int LinkedList::get(int pos) {
    int i=1;
    Node* temp=head;
    while (temp!=nullptr && i<pos) {
        temp=temp->getNext();
        i++;
    }
    if (temp==nullptr) {
        std::cout<<std::numeric_limits<int>::max()<<" ";
        return std::numeric_limits<int>::max();
    }
    else {
        std::cout<<temp->getData()<<" ";
        return temp->getData();
    }
}

//print the list of data
void LinkedList::printList() {
    if (head!=nullptr) {
        Node* temp=head;
        while (temp!=nullptr) {
            std::cout<<temp->getData()<<" ";
            temp=temp->getNext();
        }
    }
}

//destructor
LinkedList::~LinkedList() {
    if (head!=nullptr) {
        Node* temp = head;
        Node* next= head;
        while (temp!= nullptr) {
            next=temp->getNext();
            delete temp;
            temp=next;
        }
    }
}