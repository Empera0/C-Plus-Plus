#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
//The user will determine the length of the list parameter.
//Then, the program will go to the functions for creating singly linked, doubly linked, 
//circular singly linked, and circular doubly linked lists, and add random numbers to each of these lists
struct Node {
    int data;
    Node* next;
    Node* prev;
};

class SinglyLinkedList {
    private:
        Node* head;
        int size;

    public:
        SinglyLinkedList() {
            head = NULL;
            size = 0;
        }

        void addNode(int data) {
            Node* newNode = new Node;
            newNode->data = data;
            newNode->next = NULL;

            if (head == NULL) {
                head = newNode;
            }
            else {
                Node* temp = head;
                while (temp->next != NULL) {
                    temp = temp->next;
                }
                temp->next = newNode;
            }
            size++;
        }

        void displayList() {
            Node* temp = head;
            while (temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }

        int getSize() {
            return size;
        }
};

class DoublyLinkedList {
    private:
        Node* head;
        Node* tail;
        int size;

    public:
        DoublyLinkedList() {
            head = NULL;
            tail = NULL;
            size = 0;
        }

        void addNode(int data) {
            Node* newNode = new Node;
            newNode->data = data;
            newNode->next = NULL;
            newNode->prev = NULL;

            if (head == NULL) {
                head = newNode;
                tail = newNode;
            }
            else {
                tail->next = newNode;
                newNode->prev = tail;
                tail = newNode;
            }
            size++;
        }

        void displayList() {
            Node* temp = head;
            while (temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }

        int getSize() {
            return size;
        }
};

class CircularSinglyLinkedList {
    private:
        Node* head;
        Node* tail;
        int size;

    public:
        CircularSinglyLinkedList() {
            head = NULL;
            tail = NULL;
            size = 0;
        }

        void addNode(int data) {
            Node* newNode = new Node;
            newNode->data = data;
            newNode->next = NULL;

            if (head == NULL) {
                head = newNode;
                tail = newNode;
                tail->next = head;
            }
            else {
                tail->next = newNode;
                tail = newNode;
                tail->next = head;
            }
            size++;
        }

        void displayList() {
            Node* temp = head;
            do {
                cout << temp->data << " ";
                temp = temp->next;
            } while (temp != head);
            cout << endl;
        }

        int getSize() {
            return size;
        }
};

class CircularDoublyLinkedList {
    private:
        Node* head;
        Node* tail;
        int size;

    public:
        CircularDoublyLinkedList() {
            head = NULL;
            tail = NULL;
            size = 0;
        }

        void addNode(int data) {
            Node* newNode = new Node;
            newNode->data = data;
            newNode->next = NULL;
            newNode->prev = NULL;

        if (head == NULL) {
            head = newNode;
            tail = newNode;
            tail->next = head;
            head->prev = tail;
        }
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
            tail->next = head;
            head->prev = tail;
        }
        size++;
    }

    void displayList() {
        Node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }

    int getSize() {
        return size;
    }
};



int main() {
    srand(time(NULL)); // Seed the random number generator with the current time
    int length;
    cout << "Enter the length of the list: ";
    cin >> length;
    SinglyLinkedList sList;
    DoublyLinkedList dList;
    CircularSinglyLinkedList csList;
    CircularDoublyLinkedList cdList;
    
for (int i = 0; i < length; i++) {
    int num = rand() % 100; // Generate a random number between 0 and 99
    sList.addNode(num);
    num = rand() % 100;
    dList.addNode(num);
    num = rand() % 100;
    csList.addNode(num);
    num = rand() % 100;
    cdList.addNode(num);
}
cout << "Singly Linked List: ";
sList.displayList();

cout << "Doubly Linked List: ";
dList.displayList();

cout << "Circular Singly Linked List: ";
csList.displayList();

cout << "Circular Doubly Linked List: ";
cdList.displayList();

return 0;
}
