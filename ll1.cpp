#include <iostream>
using namespace std;

struct node {
    int data;    
    struct node *next; 
};
void printLinkedList(node* start) {
    node* ptr = start;
    while (ptr != NULL) {
        cout<< ptr->data<< " -> ";
        ptr=ptr->next; 
    }
    cout << "NULL" << endl;
}

int main() {
    node* head = new node();
    head->data = 10;
    head->next = new node();
    head->next->data = 20;
    head->next->next = new node();
    head->next->next->data = 30;
    head->next->next->next = NULL;
    cout << "Linked List: ";
    printLinkedList(head);
    return 0;
}
void insertAtBeginning(node** start, int newData) {
    node* newNode = new node();
    newNode->data = newData;
    newNode->next = (*start);
    (*start) = newNode;
}
void insertAfter(node* prevNode, int newData) {
    if (prevNode == NULL) {
        cout << "The given previous node cannot be NULL" << endl;
        return;
    }
    node* newNode = new node();
    newNode->data = newData;
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}
void insertAtEnd(node** start, int newData) {
    node* newNode = new node();
    node* last = *start; 
    newNode->data = newData;
    newNode->next = NULL;
    if (*start == NULL) {
        *start = newNode;
        return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = newNode;
    return;
}
void deleteNode(node** start, int key) {
    node* temp = *start, *prev = NULL;
    if (temp != NULL && temp->data == key) {
        *start = temp->next; 
        delete temp; 
        return;
    }
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) return;
    prev->next = temp->next;
    delete temp; 
}
int search(node* start, int key) {
    node* current = start; 
    while (current != NULL) {
        if (current->data == key)
            return 1;
        current = current->next;
    }
    return 0;
}
int getLength(node* start) {
    int count = 0; 
    node* current = start; 
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}
void reverse(node** start) {
    node* prev = NULL;
    node* current = *start;
    node* next = NULL;
    while (current != NULL) {
        next = current->next; 
        current->next = prev; 
        prev = current;
        current = next;
    }
    *start = prev;
}
void freeList(node* start) {
    node* current = start;
    node* next;
    while (current != NULL) {
        next = current->next;
        delete current;
        current = next;
    }
}

