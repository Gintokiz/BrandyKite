#include <stdio.h>
#include <stdlib.h>
#include "../header/lists.h"

//Create new node
Node* createNode(int data) {
    Node* new_node = malloc(sizeof(Node));
    if (!new_node) {
        perror("Errore di allocazione memoria");
        exit(EXIT_FAILURE);
    }
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

//Add node to the code
void append(Node** head, int data){
    Node* new_node = createNode(data);
    if(*head == NULL){
        *head = new_node;
        return;
    }
    Node* current = *head;
    while(current -> next){
        current = current -> next;
    }
    current -> next = new_node;
}

//Free the allocated memory of the selected node
void freeList(Node* head){
    Node* current = head;
    Node* next;
    while(current){
        next = current -> next;
        free(current);
        current = next;
    }
}

//Print List
void printList(const Node* head){
    const Node* current = head;
    while(current){
        printf("%d -> ", current -> data);
        current = current -> next;
    }
    printf("NULL\n");
}
//
// Created by user on 15/01/2025.
//
