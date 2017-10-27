//
// Created by MD SARFARAZUL HAQUE on 27-10-2017.
//

#include "List.hpp"
#include <cstdio>



void List::menu() {

    int choice , val , pos ;

    printf("1-To Create Linked List.\n");
    printf("2-To Insert Into Linked List.\n");
    printf("3-To Display The Values Of Linked List.\n");
    printf("4-To Delete A Node From Linked List.\n");
    printf("5-To Get The Size Of The Linked List.\n");
    printf("6-To Exit.\n");

    while(true){
        printf("Choose an option :- ");
        scanf("%d",&choice);

        switch (choice){

            case 1 :
                printf(VALUE);
                scanf("%d",&val);
                this->createNewLinkList(val);
                break;
            case 2 :
                printf(VALUE);
                scanf("%d",&val);
                printf(POSITION);
                scanf("%d",&pos);
                this->insertNodeAtPos(pos , val);
                break;
            case 3 :
                this->displayLinkList();
                break;
            case 4 :
                printf(POSITION);
                scanf("%d",&pos);
                this->deleteNodeAtPos(pos);
                break;
            case 5 :
                printf("%d\n",this->size);
                break;
            case 6 :
                exit(0);
            default :
                printf(INVALID_CHOICE);
        }
    }
}

void List::createNewLinkList(int val) {
    this->size += 1 ;
    this->head = this->getNewNodeWithValue(val);
}

void List::insertNodeAtPos(int pos, int val) {
    if(this->size == 0){
        printf(NOT_CREATED);
        return ;
    }
    else if(pos > this->size || pos < 0){
        printf(INVALID_POSITION);
        return ;
    }
    node *newNode , *ptr ;
    if(pos == 0){
        newNode = this->getNewNodeWithValue(val);
        newNode->next = this->head ;
        this->head = newNode ;
        printf(SUCCESSFUL);
        this->size += 1 ;
        return ;
    }

    ptr = this->head ;

    for(int i=0;i<pos-1;i++){
        ptr = ptr->next ;
    }
    newNode = this->getNewNodeWithValue(val);
    newNode->next = (ptr->next == NULL)?(NULL):(ptr->next) ;     // ERROR
    ptr->next = newNode ;
    printf(SUCCESSFUL);
    this->size += 1 ;
}

void List::displayLinkList() {
    node *ptr ;
    for(ptr=this->head ; ptr!=NULL ; ptr=ptr->next)
        printf("%d ",ptr->data);
    printf("\n");
}

void List::deleteNodeAtPos(int pos) {
    if(pos >= this->size || pos < 0){
        printf(INVALID_POSITION);
        return ;
    }
    node *ptr ;
    ptr = this->head ;
    if(pos == 0){
        this->head = ptr->next ;
        free(ptr);
        printf(SUCCESSFUL);
        this->size -= 1 ;
        return ;
    }

    for(int i=0 ; i<pos-1 ; i++){
        ptr = ptr->next ;
    }

    node *temp ;
    temp = ptr->next ;
    ptr->next = temp->next ;
    free(temp);
    this->size -= 1 ;
    printf(SUCCESSFUL);
    return ;
}