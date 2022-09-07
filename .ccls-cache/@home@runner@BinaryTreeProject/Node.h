#pragma once

/*****************************************
Class: Node of binary tree
******************************************/
class Node
{
private:
    int value;
    Node *parent, *left, *right;
public:
    Node(int, Node*);
    void connect_child(Node*);
};
/*****************************************/


// Constructors definitions

Node::Node(int val, Node * parent = nullptr)
{
    this->value = val;
    this->parent = parent;
}


// Other Methods definitions

void Node::connect_child(Node * child)
{

}
