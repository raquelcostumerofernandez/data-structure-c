/*
** EPITECH PROJECT, 2023
** data-structure-c
** File description:
** linkedList.c
*/

#include <stdio.h>
#include "linkedList.h"

Node* createNode(int data) {
}

void insertAtBeginning(Node** head, int data) {
}

void insertAtEnd(Node** head, int data) {

}

void deleteNode(Node** head, int key) {

}

void printList(Node* head) {

}

void freeList(Node* head) {

}

int main() {
    Node *head = NULL;

    // Test insertAtBeginning
    printf("Inserting 10 at the beginning:\n");
    insertAtBeginning(&head, 10);
    printList(head);

    // Test insertAtEnd
    printf("Inserting 20 at the end:\n");
    insertAtEnd(&head, 20);
    printList(head);

    // Test createNode and insertAtEnd
    printf("Creating a node with 30 and inserting at end:\n");
    Node *newNode = createNode(30);
    insertAtEnd(&head, newNode->data);
    printList(head);

    // Test deleteNode
    printf("Deleting node with data 10:\n");
    deleteNode(&head, 10);
    printList(head);

    // Free the list
    freeList(head);

    return 0;
}
