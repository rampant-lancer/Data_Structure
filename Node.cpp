//
// Created by MD SARFARAZUL HAQUE on 27-10-2017.
//

#include "Node.hpp"

node * Node::getNewNodeWithValue(int val) {
    do{
        newNode = (node *)calloc(1,sizeof(node));
    }while(!(newNode));
    newNode->data = val ;
    newNode->next = NULL ;
    newNode->prev = NULL ;

    return newNode ;
}
