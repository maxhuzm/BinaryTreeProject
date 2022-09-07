#pragma once
#include "Node.h"


/*****************************************
Class: Binary tree
******************************************/
class BinaryTree
{
private:
    Node * root;
public:
    BinaryTree(int);

};
/*****************************************/


// Constructors definitions

BinaryTree::BinaryTree(int root_value)
{
    root = new Node(root_value);
}
