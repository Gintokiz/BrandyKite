#include <stdio.h>
#include <stdlib.h>
#include "../header/lists.h"

//Create new node
Node* create_node(int data) {
    Node* new_node = (Node*) malloc(sizeof(Node));
    if (!new_node) {
        perror("Errore di allocazione memoria");
        exit(EXIT_FAILURE);
    }
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

//
// Created by user on 15/01/2025.
//
