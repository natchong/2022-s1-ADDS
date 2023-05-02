#ifndef NODE_H
#define NODE_H
class Node {

    private:
    int data;
    Node* link;
    friend class LinkedList;
    
    public:
    Node(){};
    Node (int n_data, Node* n_link);


};
#endif