#include <bits/stdc++.h>
using namespace std;
// Node class
class Node {
public:
    int data;
    Node* next;
    Node(int v) { data = v; next = nullptr; }
};
// Singly Linked List class
class SinglyLinkedList {
public:
    Node* start;
    SinglyLinkedList() { start = nullptr; }

    // 1. Insert at beginning
    void insertAtBeginning(int k) {
        Node* newNode = new Node(k);
        newNode->next = start;
        start = newNode;
    }
    // 2. Insert at end
    void insertAtEnd(int k) {
        Node* newNode = new Node(k);
        if (!start) { start = newNode; return; }
        Node* p = start;
        while (p->next) p = p->next;
        p->next = newNode;
    }
    // 3. Traverse & print
    void traverse() {
        Node* p = start;
        while (p) { cout << p->data << " "; p = p->next; }
        cout << endl;
    }
    // 4. Sum all node values
    void sumAllValues() {
        int sum = 0;
        Node* p = start;
        while (p) { sum += p->data; p = p->next; }
        cout << "Sum: " << sum << endl;
    }
    // 5. Remove node before a value
    void removeBefore(int x) {
        if (!start || !start->next) return;
        if (start->next->data == x) { Node* temp = start; start = start->next; delete temp; return; }
        Node* prev = start; Node* curr = start->next;
        while (curr->next && curr->next->data != x) { prev = curr; curr = curr->next; }
        if (!curr->next) return;
        prev->next = curr->next;
        delete curr;
    }
    // 6. Find middle node
    void findMiddle() {
        if (!start) return;
        Node* slow = start; Node* fast = start;
        while (fast && fast->next) { slow = slow->next; fast = fast->next->next; }
        cout << "Middle: " << slow->data << endl;
    }
    // 7. Sort nodes ascending
    void sortList() {
        if (!start || !start->next) return;
        Node* sorted = nullptr; Node* current = start;
        while (current) {
            Node* nextNode = current->next; current->next = nullptr;
            if (!sorted || current->data < sorted->data) { current->next = sorted; sorted = current; }
            else {
                Node* temp = sorted;
                while (temp->next && temp->next->data < current->data) temp = temp->next;
                current->next = temp->next;
                temp->next = current;
            }
            current = nextNode;
        }
        start = sorted;
    }
    // 8. Check cycle
    void checkCycle() {
        Node* slow = start; Node* fast = start;
        while (fast && fast->next) { slow = slow->next; fast = fast->next->next; if (slow == fast) { cout << "Cycle detected\n"; return; } }
        cout << "No cycle\n";
    }
};
int main() {
    SinglyLinkedList sl;
    sl.insertAtBeginning(5); sl.insertAtBeginning(10); sl.insertAtEnd(3);
    cout << "Linked List: "; sl.traverse();
    sl.sumAllValues();
    sl.removeBefore(3); cout << "After removing node before 3: "; sl.traverse();
    sl.findMiddle();
    sl.sortList(); cout << "Sorted List: "; sl.traverse();
    sl.checkCycle();
}

