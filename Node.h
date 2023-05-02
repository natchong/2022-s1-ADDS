#ifndef NODE_H
#define NODE_H
class Node {

    private:
    int data;
    Node* link;
    friend class LinkedList; //makes both private and public classes of LinkedList available
    
    public:
    Node(){};
    Node (int n_data, Node* n_link);


};
#endif