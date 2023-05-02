#include "Node.h"

Node::Node(int temp) {
    data=temp;
    next=nullptr;
}

int Node::getData() {
    return data;
}

void Node::setData(int newData) {
    data=newData;
}

Node* Node::getNext() {
    return next;
}

void Node::setNext(Node* n_next) {
    next=n_next;
}
