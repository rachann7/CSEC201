#include <stdio.h> //Give us the basic input/output functions
#include <stdlib.h>  //Give us the memory manipulation function

//struct <name>{
//  <data members go here>
//}; 

struct node{
    int data;
    struct node * next;
};

struct linkedlist{
    int size;
    struct node * head;
};

struct linkedlist * initalize(void) {
    struct linkedlist * newlist = NULL; // Create a new linkedlist pointer on the stack
    newlist = (struct linkedlist*) malloc(sizeof(struct linkedlist));
    newlist->size=0; // using the -> because newlist is a pointer 
                     // if newlist wasn't a pointer, we would use a . (ex: newlist.size)
    newlist->head=NULL;

    return newlist; // returns what new list points at 
}

void add(struct linkedlist * list, int value) {
    if(list==NULL) {
        return;  // if the list is not initialized, bail out
    }
    struct node* temp = malloc(sizeof(struct node));
    temp->data = value;
    temp->next = list->head;
    list->head = temp;
    list->size++;
}

void printlist(struct linkedlist* list) {
    struct node* temp = list->head;
    while(temp!=NULL) {
        printf("Node Address: %p, Node Address: %d\n", temp, temp->data);
        temp = temp->next;
    }
}

int main(void) {
    struct linkedlist* list = initialize();
    add(list, 10);
    add(list, 20);
    add(list, -1);
    add(list, 5);
    printlist(list);
    return 0;
}