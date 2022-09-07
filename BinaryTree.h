#pragma once
#include <iostream>
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
    void show_tree(Node *);
    Node * add_node(int, Node*);
    Node * find_node(int, Node*);
    int layers_count();
};
/*****************************************/


// Constructors definitions

BinaryTree::BinaryTree(int root_value)
{
    root = new Node(root_value);
}


// Show tree
void BinaryTree::show_tree(Node * start_from = nullptr)
{
    if (start_from == nullptr) start_from = this->root;
    if (start_from->left) show_tree(start_from->left);
    std::cout << start_from->value << ", ";
    if (start_from->right) show_tree(start_from->right);
}


// Add new node
Node * BinaryTree::add_node(int val, Node * start_from = nullptr)
{
    Node * parent = (start_from) ? start_from : root;
    Node * added = nullptr;
    Node * pchild = (val < parent->value) ? parent->left : parent->right;
    if (pchild == nullptr) added = new Node(val, parent);
    else added = add_node(val, pchild);
    added->parent->connect_child(added);
    return added;
}


// Find node with given value
Node * BinaryTree::find_node(int val, Node * start_from = nullptr)
{
    Node * found_node = nullptr;
    if (start_from == nullptr) start_from = this->root;
    if (start_from->value == val) found_node = start_from; // found
    else { // need to dive deeper
        if ((val < start_from->value) && (start_from->left != nullptr))
            found_node = find_node(val, start_from->left);
        else if ((val >= start_from->value) && (start_from->right != nullptr))
            found_node = find_node(val, start_from->right);
    }
    return found_node;
}
