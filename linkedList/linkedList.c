/*
** EPITECH PROJECT, 2023
** data-structure-c
** File description:
** linkedList.c
*/

#include <stdlib.h>
#include <stddef.h>
#include "linkedList.h"
#include <stdio.h>

Node* createNode(int data) {
    Node *head = malloc(sizeof(data));

    if (head == NULL)
        return NULL;
    head->data = data;
    head->next = NULL;
    return head;
}

void insertAtBeginning(Node** head, int data) {
{
    struct Node *ptr = (struct Node **) malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return;
}
}

void insertAtEnd(Node** head, int data) 
{
    struct Node *ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->data = ptr;
    ptr->next = NULL;
    return head;
}

void deleteNode(Node** head, int key) {
    (void)head;
    (void)key;
    return;
}

void printList(Node* head) {
    while (head != NULL) {
        printf("%d\n", head->data);
        head = head->next;
    }
    return;
}

void freeList(Node* head) {
    free(head);
    return;
}
