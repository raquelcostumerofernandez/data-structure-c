/*
** EPITECH PROJECT, 2024
** data-structure-c
** File description:
** tree
*/

#ifndef TREE_H_
#define TREE_H_

// A binary tree node
typedef struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;

// Function declarations for binary tree operations
TreeNode* createNode(int data);
TreeNode* insertNode(TreeNode* root, int data);
TreeNode* deleteNode(TreeNode* root, int data);
TreeNode* search(TreeNode* root, int data);
void inorderTraversal(TreeNode* root);
void preorderTraversal(TreeNode* root);
void postorderTraversal(TreeNode* root);
void freeTree(TreeNode* root);


#endif /* !TREE_H_ */
