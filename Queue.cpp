//
// Created by MD SARFARAZUL HAQUE on 27-10-2017.
//

#include "Queue.hpp"
#include "Messages.hpp"
#include <cstdio>

void Queue::menu() {
    int choice , val ;
    printf("1-To Enqueue.\n");
    printf("2-To Dequeue.\n");
    printf("3-To Front.\n");
    printf("4-To Size.\n");
    printf("5-To Check Whether Empty Or Not.\n");
    printf("6-To Display The Content Of Queue.\n");
    printf("7-To Exit.\n");
    while(true){

        printf("Enter Choice :- ");
        scanf("%d",&choice);
        switch (choice){
            case 1:
                printf(VALUE);
                scanf("%d",&val);
                this->enqueue(val);
                break;
            case 2:
                this->dequeue();
                break;
            case 3:
                printf("The Value At The Front = %d.\n",(this->front()));
                break;
            case 4:
                printf("The Size Of The Queue = %d.\n",(this->sizeOfQueue()));
                break;
            case 5:
                (this->isEmpty())?(printf("The Queue Is Empty.\n")):(printf("The Queue Is Not Empty.\n"));
                break;
            case 6:
                this->display();
                break;
            case 7:
                printf("Program Is Exiting.\n");
                exit(0);
            default:
                printf(INVALID_CHOICE);

        }
    }
}

void Queue::display() {
    node *ptr ;
    if(!(this->head))
        printf(NOT_CREATED);
    else{
        ptr = this->head ;
        for(;ptr!=NULL;ptr=ptr->next)
            printf("%d ",ptr->data);
        printf("\n");
    }
}

void Queue::enqueue(int val) {
    node *newNode ;
    newNode = this->getNewNodeWithValue(val);
    if(!(this->head)){
        this->head = newNode ;
    }
    else{
        node *ptr ;
        ptr = this->head ;
        for( ; ptr->next != NULL ; ptr=ptr->next);
        ptr->next = newNode ;
    }
    printf(SUCCESSFUL);
    this->size += 1 ;
}

void Queue::dequeue() {
    if(!(this->head))
        printf(NOT_CREATED);
    else{
        node *ptr ;
        ptr = this->head ;
        this->head = ptr->next ;
        ptr->next = NULL ;
        free(ptr);
        printf(SUCCESSFUL);
        this->size -= 1 ;
    }
}

int Queue::front() {
    if(!(this->head))
        printf(NOT_CREATED);
    else{
        return (this->head)->data ;
    }
}

int Queue::sizeOfQueue() {
    return this->size ;
}

bool Queue::isEmpty() {
    if(!(this->head))
        return true ;
    else
        return false ;
}
