#include <iostream>
#include "BinaryTree.h"
using std::cout;
using std::endl;


int main()
{
    BinaryTree tree(3);
    tree.add_node(2);
    tree.add_node(8);
    tree.add_node(7);
    tree.add_node(5);
    tree.add_node(12);
    tree.add_node(45);
    tree.show_tree();
    cout << endl;
    cout << tree.find_node(45)->value << endl;
}