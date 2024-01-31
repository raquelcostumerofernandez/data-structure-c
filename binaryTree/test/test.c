/*
** EPITECH PROJECT, 2023
** data-structure-c
** File description:
** test.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../tree.h"

Test(binary_tree, test_createNode) {
    TreeNode *node = createNode(10);
    cr_assert_not_null(node, "createNode() should return a non-null pointer");
    cr_assert_eq(node->data, 10, "Node data should be 10");
    cr_assert_null(node->left, "Left child should be NULL");
    cr_assert_null(node->right, "Right child should be NULL");
    freeTree(node);
}

Test(binary_tree, test_insertNode) {
    TreeNode *root = NULL;
    root = insertNode(root, 15);
    cr_assert_not_null(root, "insertNode() should not return NULL for first insert");
    cr_assert_eq(root->data, 15, "Root node data should be 15");
    freeTree(root);
}

Test(binary_tree, test_deleteNode) {
    TreeNode *root = NULL;
    root = insertNode(root, 20);
    root = insertNode(root, 10);
    root = deleteNode(root, 10);
    cr_assert_not_null(root, "Root should not be NULL after delete");
    TreeNode *searchResult = search(root, 10);
    cr_assert_null(searchResult, "Deleted node should not be found");
    freeTree(root);
}

Test(binary_tree, test_search) {
    TreeNode *root = NULL;
    root = insertNode(root, 25);
    TreeNode *searchResult = search(root, 25);
    cr_assert_not_null(searchResult, "Search should find the inserted node");
    freeTree(root);
}

Test(binary_tree, test_inorderTraversal) {
    TreeNode *root = NULL;
    root = insertNode(root, 25);
    root = insertNode(root, 10);
    root = insertNode(root, 30);
    root = insertNode(root, 5);
    root = insertNode(root, 15);
    root = insertNode(root, 35);
    cr_redirect_stdout();
    inorderTraversal(root);
    cr_assert_stdout_eq_str("5 10 15 25 30 35 ", "inorderTraversal() should print the tree in order");
    freeTree(root);
}

Test(binary_tree, test_preorderTraversal) {
    TreeNode *root = NULL;
    root = insertNode(root, 25);
    root = insertNode(root, 10);
    root = insertNode(root, 30);
    root = insertNode(root, 5);
    root = insertNode(root, 15);
    root = insertNode(root, 35);
    cr_redirect_stdout();
    preorderTraversal(root);
    cr_assert_stdout_eq_str("25 10 5 15 30 35 ", "preorderTraversal() should print the tree in preorder");
    freeTree(root);
}

Test(binary_tree, test_postorderTraversal) {
    TreeNode *root = NULL;
    root = insertNode(root, 25);
    root = insertNode(root, 10);
    root = insertNode(root, 30);
    root = insertNode(root, 5);
    root = insertNode(root, 15);
    root = insertNode(root, 35);
    cr_redirect_stdout();
    postorderTraversal(root);
    cr_assert_stdout_eq_str("5 15 10 35 30 25 ", "postorderTraversal() should print the tree in postorder");
    freeTree(root);
}

Test(binary_tree, test_freeTree) {
    TreeNode *root = NULL;
    root = insertNode(root, 25);
    freeTree(root);
}
