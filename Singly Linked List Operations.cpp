#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;

    Node(int v){
        data = v;
        next = nullptr;
    }
};
class SinglyLinkedList{
public:
    Node* start;
    SinglyLinkedList(){
        start = nullptr;
    }
    void traverse(){
        Node* p = start;
        while(p!=nullptr){
            cout<<p->data<<" ";
            p = p->next;
        }
        cout<<endl;
    }
    void insertData(int k){
        Node* newNode = new Node(k);
        newNode->next = start;
        start = newNode;
    }
    // a) implement sumAllValues(): add all data values and print result.
    void sumAllValues(){
        int sum = 0;
        Node* p = start;
        while(p != nullptr){
            // digit-by-digit style not required here; just accumulate
            sum += p->data;
            p = p->next;
        }
        cout <<sum<< endl;
    }
    // b) implement removeANode(int x): remove the node *before* the node that has data == x
void removeANode(int x){
    if(!start || start->data == x){
        cout << "Not possible to remove before " << x << endl;
        return;
    }

    Node* prev = start, *curr = start->next;
    if(curr && curr->data == x){
        start = curr;
        delete prev;
        cout << "Removed node before " << x << endl;
        traverse();
        return;
    }
    while(curr && curr->data != x){
        prev = curr;
        curr = curr->next;
    }
    if(!curr){
        cout << x << " not found." << endl;
        return;
    }

    Node* toDelete = prev;
    Node* p = start;
    while(p->next != toDelete) p = p->next;
    p->next = curr;
    delete toDelete;

    cout << "Removed node before " << x << endl;
    traverse();
}

};
int main(){
    SinglyLinkedList sl;
    sl.insertData(5);
    sl.traverse();
    sl.insertData(10);
    sl.traverse();
    sl.insertData(7);
    sl.traverse();
    sl.insertData(13);
    sl.traverse();
    sl.sumAllValues();
    sl.removeANode(10);
    return 0;
}

