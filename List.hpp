//
// Created by MD SARFARAZUL HAQUE on 27-10-2017.
//

#ifndef DATA_STRUCTURE_LIST_HPP
#define DATA_STRUCTURE_LIST_HPP

#include "Node.hpp"
#include "Messages.hpp"

class List : protected Node
{
private :
    node *head ;
    int size = 0 ;

    void createNewLinkList(int val);
    void insertNodeAtPos(int pos , int val);
    void displayLinkList();
    void deleteNodeAtPos(int pos);

public :
    void menu();
};

#endif //DATA_STRUCTURE_LIST_HPP
