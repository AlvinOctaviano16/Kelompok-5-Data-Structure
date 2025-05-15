#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Fungsi mencetak linked list dalam satu baris
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data;
        if (head->next != nullptr) {
            cout << " → ";
        }
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Contoh manual: 49 → 10 → 30
    Node* head = new Node{49, nullptr};
    head->next = new Node{10, nullptr};
    head->next->next = new Node{30, nullptr};

    // Cetak linked list
    printList(head);

    // Membersihkan memori
    delete head->next->next;
    delete head->next;
    delete head;

    return 0;
}
