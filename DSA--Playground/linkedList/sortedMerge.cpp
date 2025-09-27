#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Insert a node at end of the list
void insertAtEnd(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Merge two sorted lists into a new list (head2 remains unchanged)
void sortedMerge(Node*& head1, Node* head2) {
    // ✅ Base conditions
    if (head2 == NULL) return;          // head2 empty → nothing to merge
    if (head1 == NULL) {                // head1 empty → merged = head2
        head1 = head2;
        return;
    }

    Node* temp1 = head1;
    Node* temp2 = head2;
    Node* newHead = NULL;

    while (temp1 != NULL && temp2 != NULL) {
        if (temp1->data <= temp2->data) {
            insertAtEnd(newHead, temp1->data);
            temp1 = temp1->next;
        } else {
            insertAtEnd(newHead, temp2->data);
            temp2 = temp2->next;
        }
    }

    // Copy remaining nodes of list1
    while (temp1 != NULL) {
        insertAtEnd(newHead, temp1->data);
        temp1 = temp1->next;
    }

    // Copy remaining nodes of list2
    while (temp2 != NULL) {
        insertAtEnd(newHead, temp2->data);
        temp2 = temp2->next;
    }

    head1 = newHead; // ✅ final merged list
}

// Utility to print a linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head1 = NULL;
    Node* head2 = NULL;

    // Example input
    insertAtEnd(head1, 1);
    insertAtEnd(head1, 3);
    insertAtEnd(head1, 5);

    insertAtEnd(head2, 2);
    insertAtEnd(head2, 4);
    insertAtEnd(head2, 6);

    cout << "List1: ";
    printList(head1);

    cout << "List2: ";
    printList(head2);

    sortedMerge(head1, head2);

    cout << "Merged List: ";
    printList(head1);

    cout << "List2 after merge (unchanged): ";
    printList(head2);

    return 0;
}