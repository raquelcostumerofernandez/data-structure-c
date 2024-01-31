/*
** EPITECH PROJECT, 2024
** data-structure-c
** File description:
** linkedList
*/

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function declarations
Node* createNode(int data);
void insertAtBeginning(Node** head, int data);
void insertAtEnd(Node** head, int data);
void printList(Node* head);
void deleteNode(Node** head, int key);
void freeList(Node* head);

#endif /* !LINKEDLIST_H_ */
