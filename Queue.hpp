//
// Created by MD SARFARAZUL HAQUE on 27-10-2017.
//

#ifndef DATA_STRUCTURE_QUEUE_HPP
#define DATA_STRUCTURE_QUEUE_HPP

#include <cstdlib>
#include "Node.hpp"

class Queue : protected Node
{
private :
    node *head = NULL ;
    int size = 0 ;

    void enqueue(int val);
    void dequeue();
    int front();
    int sizeOfQueue();
    bool isEmpty();
    void display();

public :
    void menu();
};

#endif //DATA_STRUCTURE_QUEUE_HPP
