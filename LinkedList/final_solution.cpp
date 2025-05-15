#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int new_data) {
        this->data = new_data;
        this->next = nullptr;
    }
};

void printList(Node* head) {

    if (head == nullptr) {
        return;
    }

    cout << head->data << " ";

    printList(head->next);
}

int main() {
  
    Node* head = new Node(49);
    head->next = new Node(10);
    head->next->next = new Node(30);

    printList(head);

    return 0;
}
