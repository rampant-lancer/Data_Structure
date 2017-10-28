//
// Created by MD SARFARAZUL HAQUE on 28-10-2017.
//

#include <cstdio>
#include "Stack.hpp"
#include "Messages.hpp"

void Stack::menu( ) {
    int choice , val ;
    printf("1-To Push.\n");
    printf("2-To Pop.\n");
    printf("3-To Top.\n");
    printf("4-To Size.\n");
    printf("5-To Check Whether Empty Or Not.\n");
    printf("6-To Display The Content Of Stack.\n");
    printf("7-To Exit.\n");
    while(true){

        printf("Enter Choice :- ");
        scanf("%d",&choice);
        switch (choice){
            case 1:
                printf(VALUE);
                scanf("%d",&val);
                this->push(val);
                break;
            case 2:
                this->pop( );
                break;
            case 3:
                printf("The Value At The Top = %d.\n",(this->top( )));
                break;
            case 4:
                printf("The Size Of The Stack = %d.\n",(this->getSize( )));
                break;
            case 5:
                (this->isEmpty())?(printf("The Stack Is Empty.\n")):(printf("The Stack Is Not Empty.\n"));
                break;
            case 6:
                this->display( );
                break;
            case 7:
                printf("Program Is Exiting.\n");
                exit(0);
            default:
                printf(INVALID_CHOICE);

        }
    }
}


void Stack::push(int val) {
    node *newNode ;
    newNode = this->getNewNodeWithValue(val);
    if(!(this->head)){
        this->head = newNode ;
    }
    else{
        newNode->next = this->head ;
        this->head = newNode ;
    }
    this->size += 1 ;
    printf(SUCCESSFUL);
}

void Stack::pop( ) {
    if(!(this->head))
        printf(NOT_CREATED);
    else{
        node *ptr ;
        ptr = this->head ;
        this->head = ptr->next ;
        ptr->next = NULL ;
        free(ptr);
        this->size -= 1 ;
        printf(SUCCESSFUL);
    }
}

bool Stack::isEmpty( ) {
    if(!(this->head))
        return true ;
    else
        return false ;
}

int Stack::getSize( ) {
    return this->size ;
}

int Stack::top( ) {
    if(!(this->head))
        printf(NOT_CREATED);
    else {
        return (this->head)->data ;
    }
}

void Stack::display( ) {
    if(!(this->head))
        printf(NOT_CREATED);
    else{
        node *ptr ;
        ptr = this->head ;
        while(ptr!=NULL){
            printf("%d ",ptr->data);
            ptr = ptr->next ;
        }
        printf("\n");
    }
}


