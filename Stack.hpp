//
// Created by MD SARFARAZUL HAQUE on 28-10-2017.
//

#ifndef DATA_STRUCTURE_STACK_HPP
#define DATA_STRUCTURE_STACK_HPP

#include "Node.hpp"


class Stack : protected Node
{
private :
    node *head = NULL ;
    int size = 0 ;

    void push(int val);
    void pop( );
    bool isEmpty( );
    int getSize( );
    int top( );
    void display( );


public :
    void menu( );
};

#endif //DATA_STRUCTURE_STACK_HPP
