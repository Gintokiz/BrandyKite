#ifndef BRANDYKITE_LISTS_H
#define BRANDYKITE_LISTS_H

typedef struct Node{
    int data;
    struct Node* next;
} Node;

Node* createNode(int data); //Create new node
void append(Node** head, int data); //Add node to the code
void printList(const Node* head); //Print List
void freeList(Node* head); //Free the memory allocation of the list



/*
 * TODO: Library for managing lists and data structures
 *
 * 1. Definition of the structure:
 *    - Define a struct to represent a node in the list.
 *    - Optionally define a struct for the list (if needed, to store metadata like size).
 *
 * 2. Creation and initialization functions:
 *    - Create a function to initialize a new node.
 *    - Create a function to initialize a new list (optional).
 *
 * 3. Basic operations on the list:
 *    - Insertion:
 *        - Insert an element at the beginning.
 *        - Insert an element at the end.
 *        - Insert an element at a specific position.
 *    - Deletion:
 *        - Delete an element from the beginning.
 *        - Delete an element from the end.
 *        - Delete an element from a specific position.
 *    - Search:
 *        - Search for an element in the list.
 *    - Access:
 *        - Retrieve an element at a specific position.
 *
 * 4. Advanced operations:
 *    - Sort the list (e.g., using bubble sort or merge sort).
 *    - Reverse the list.
 *    - Remove duplicates from the list.
 *    - Split the list into two lists.
 *    - Concatenate two lists.
 *
 * 5. Utility functions:
 *    - Calculate the length of the list.
 *    - Check if the list is empty.
 *    - Print all elements in the list.
 *
 * 6. Memory management:
 *    - Deallocate a node.
 *    - Deallocate the entire list.
 *
 * 7. Future expansions:
 *    - Support for doubly linked lists.
 *    - Implementation of other structures (e.g., stacks and queues).
 *    - Generic functions using void pointers for different data types.
 *
 * Note: Include preprocessor guards (#ifndef, #define, #endif) to prevent multiple inclusions.
 */

#endif //BRANDYKITE_LISTS_H

//
// Created by Brandymami on 15/01/2025.
//

