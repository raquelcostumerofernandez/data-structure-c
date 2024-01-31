#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../linkedList.h"

Test(linked_list, test_createNode) {
    Node *node = createNode(10);
    cr_assert_not_null(node, "createNode() should return a non-null pointer");
    cr_assert_eq(node->data, 10, "Node data should be 10");
    freeList(node);
}

Test(linked_list, test_insertAtBeginning) {
    Node *head = NULL;
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 10);
    cr_assert_not_null(head, "Head should not be null after insertAtBeginning()");
    cr_assert_eq(head->data, 10, "Head node data should be 10");
    cr_assert_eq(head->next->data, 20, "Head->next node data should be 20");
    freeList(head);
}

Test(linked_list, test_insertAtBeginningEmptyList) {
    Node *head = NULL;
    insertAtBeginning(&head, 20);
    cr_assert_not_null(head, "Head should not be null after insertAtBeginning()");
    cr_assert_eq(head->data, 20, "Head node data should be 20");
    freeList(head);
}

Test(linked_list, test_insertAtEnd) {
    Node *head = NULL;
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);
    cr_assert_not_null(head, "Head should not be null after insertAtEnd()");
    cr_assert_eq(head->data, 30, "Head node data should be 30");
    cr_assert_eq(head->next->data, 40, "Head->next node data should be 40");
    freeList(head);
}

Test(linked_list, test_insertAtEndEmptyList) {
    Node *head = NULL;
    insertAtEnd(&head, 30);
    cr_assert_not_null(head, "Head should not be null after insertAtEnd()");
    cr_assert_eq(head->data, 30, "Head node data should be 30");
    freeList(head);
}

Test(linked_list, test_printList) {
    Node *head = NULL;
    insertAtEnd(&head, 40);
    cr_assert_stdout_eq_str("40\n", "printList() should print the list");
    freeList(head);
}

Test(linked_list, test_deleteNode) {
    Node *head = NULL;
    insertAtEnd(&head, 40);
    deleteNode(&head, 40);
    cr_assert_null(head, "Head should be null after deleting the only node");
    freeList(head);
}

Test(linked_list, test_freeList) {
    Node *head = NULL;
    insertAtEnd(&head, 50);
    freeList(head);
}
