//
// Created by MD SARFARAZUL HAQUE on 27-10-2017.
//

#ifndef DATA_STRUCTURE_NODE_HPP
#define DATA_STRUCTURE_NODE_HPP

#include <cstdlib>


struct node
{
    int data ;
    struct node *next , *prev ;
};

typedef struct node node ;

class Node
{
protected:
    node *newNode = NULL ;
    node * getNewNodeWithValue(int val);
};

#endif //DATA_STRUCTURE_NODE_HPP
