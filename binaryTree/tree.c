/*
** EPITECH PROJECT, 2023
** data-structure-c
** File description:
** tree.c
*/

#include <stdio.h>
#include "tree.h"

TreeNode* createNode(int data) {
    return NULL;
}

TreeNode* insertNode(TreeNode* root, int data) {
    return NULL;
}

TreeNode* deleteNode(TreeNode* root, int data) {
    return NULL;
}

TreeNode* search(TreeNode* root, int data) {
    return NULL;
}

void inorderTraversal(TreeNode* root) {

}

void preorderTraversal(TreeNode* root) {

}

void postorderTraversal(TreeNode* root) {

}

void freeTree(TreeNode* root) {

}

int main() {
    TreeNode *root = NULL;

    root = insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 20);
    insertNode(root, 40);
    insertNode(root, 70);
    insertNode(root, 60);
    insertNode(root, 80);

    if (!root) {
        printf("root is NULL\n");
        return 84;
    }
    printf("Inorder traversal of the given tree:\n");
    inorderTraversal(root);

    printf("\nPreorder traversal of the given tree:\n");
    preorderTraversal(root);

    printf("\nPostorder traversal of the given tree:\n");
    postorderTraversal(root);

    printf("\nDelete 20\n");
    root = deleteNode(root, 20);
    if (!root) {
        printf("root is NULL\n");
        return 84;
    }
    printf("Inorder traversal after deleting 20:\n");
    inorderTraversal(root);

    TreeNode *searchResult = search(root, 30);
    if (searchResult != NULL) {
        printf("\nElement 30 found in the tree\n");
    } else {
        printf("\nElement 30 not found in the tree\n");
    }

    freeTree(root);

    return 0;
}
