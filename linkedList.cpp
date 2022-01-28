#include <iostream>
using namespace std;

class Node {
    public: 
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    Node() {
        this->data = 0;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int data) {
    Node* temp = new Node(data);

    if(head == NULL) {
        head = temp;
        return;
    }

    temp->next = head;
    head = temp;
}

void insertAtEnd(Node* &tail, int data) {
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertInBetween(Node* &head, Node* &tail, int data, int pos) {
    Node* temp = new Node(data);
    if(head == NULL) {
        head = temp;
        return;
    }

    if(pos == 0) {
        insertAtHead(head, data);
        return;
    }

    Node* prev = head;
    for(int i=1; i<pos-1; i++) {
        prev = prev->next;
        if(prev->next == NULL) {
            insertAtEnd(tail, data);
            return;
        }
    }

    temp->next = prev->next;
    prev->next = temp;
}

void printList(Node* head) {
    while(head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

void deleteList(Node* &head) {
    while (head) {
        Node* prev = head;
        head = head->next;
        delete prev;
    }
}

int main() {
    Node* node1 = new Node(1); 
    Node* head = node1;
    Node* tail = node1;
    insertAtEnd(tail, 2);
    insertAtEnd(tail, 3);
    insertAtEnd(tail, 4);
    insertInBetween(head, tail, 69, 3);
    insertAtHead(head, 0);
    insertAtHead(head, 0);
    insertAtEnd(tail, 99);
    insertInBetween(head, tail, 99, 0);
    insertInBetween(head, tail, 100, 100);
    printList(head);
    deleteList(head);
    return 0;
} 