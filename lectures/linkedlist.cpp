/*
Name: Jeremy Bergen

Linked list
*/
#include <iostream>
#include <string>

using namespace std;

// struct Data {
//     int x, y, z;
//     string fName, lName;
// };

struct Node {
    // Data *data = new Data();
    int data;
    Node *next;
};

void printList(Node *);
void deleteList(Node *);
void buildList(Node *, int);
void addToEnd(Node *);

int main(int argc, char *argv[]) {
    Node *head = new Node();
    int listSize = 0;
    cout << "How many numbers do you want to enter? ";
    cin >> listSize;

    head->data = 0;
    head->next = NULL;

    // Node *currentNode = head;

    buildList(head, listSize);

    printList(head);

    cout << "Adding a new number" << endl;
    addToEnd(head);
    printList(head);


    // Node *node1 = new Node();
    // Node *node2 = new Node();

    // node1->next = node2;
    // node1->data->x = 42;
    // node1->data->y = 15;
    // node1->data->fName = "Jeremy";

    // node2->next = NULL;

    // cout << "DEBUG: " << node1->data->fName << endl;

    // delete node1->data;
    // delete node1;
    // delete node2->data;
    // delete node2;

    deleteList(head);

    return 0;
}

void addToEnd(Node *head) {
    Node *currentNode = head;
    while(currentNode->next != NULL) {
        currentNode = currentNode->next;
    }
    Node *newNode = new Node();
    cout << "Enter a number: ";
    cin >> newNode->data;
    newNode->next = NULL;
    currentNode->next = newNode;
}

void buildList(Node *head, int listSize) {
    Node *currentNode = head;
    for(int i = 0; i < listSize; i++) {
        if(i == 0) {
            cout << "Enter a number: ";
            cin >> head->data;
            continue;
        }

        Node *tmpNode = new Node();
        cout << "Enter a number: ";
        cin >> tmpNode->data;
        tmpNode->next = NULL;
        currentNode->next = tmpNode;
        currentNode = tmpNode;
    }
}

void deleteList(Node *head) {
    Node *currentNode;
    currentNode = head;
    Node *deleteNode = currentNode;
    while(currentNode->next != NULL) {
        currentNode = currentNode->next;
        cout << "Deleting: " << deleteNode->data << endl;
        delete deleteNode;
        deleteNode = currentNode;
    }
    cout << "Deleting: " << currentNode->data << endl;
    delete currentNode;
}


void printList(Node *head) {
    Node *currentNode;
    currentNode = head;
    while(currentNode->next != NULL) {
        cout << "DEBUG: " << currentNode->data << endl;
        currentNode = currentNode->next;
    }
    cout << "DEBUG: " << currentNode->data << endl;
}