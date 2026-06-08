#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int d;
    Node* prev;
    Node* next;

    Node(int k){
        d = k;
        prev = nullptr;
        next = nullptr;
    }
};

class List{
public:
    Node* st;
    List(){
        st = nullptr;
    }

    void traverse(){
        Node* p = st;
        while(p!=nullptr){
            cout<<p->d<<" ";
            p = p->next;
        }
        cout<<endl;
    }

    void insertFirst(int v){
        Node* newNode = new Node(v);
        if(st == nullptr){
            st = newNode;
        }
        else{
            newNode->next = st;
            st->prev = newNode;
            st = newNode;
        }
    }

    void insertLast(int v){
        Node* newNode = new Node(v);
        Node* p = st;
        while(p->next!=nullptr){
            p = p->next;
        }
        p->next = newNode;
        newNode->prev = p;
    }

    void insertBefore(int k, int t){
        Node* newNode = new Node(k);
        Node* p = st;
        while(p->d!=t){
            p=p->next;
        }
        newNode->next = p;
        newNode->prev = p->prev;
        p->prev->next = newNode;
        p->prev = newNode;
    }

    void insertAfter(int k, int t){
        Node* newNode = new Node(k);
        Node* p = st;
        while(p->d!=t){
            p=p->next;
        }
        newNode->next = p->next;
        newNode->prev = p;
        p->next->prev = newNode;
        p->next = newNode;
    }

    void deleteFirst(){
        st = st->next;
        st->prev = nullptr;
    }
    void deleteLast(){
        Node* p = st;
        while(p->next->next!=nullptr){
            p = p->next;
        }
        p->next = nullptr;
    }

    void deleteAfter(int t){
        Node* p = st;
        while(p->d!=t){
            p=p->next;
        }
        p = p->next;
        p->prev->next = p->next;
        p->next->prev = p->prev;
    }
    void deleteBefore(int t){
        Node* p = st;
        while(p->d!=t){
            p=p->next;
        }
        p = p->prev;
        p->prev->next = p->next;
        p->next->prev = p->prev;
    }
};

int main(){
    List l;
    l.insertFirst(4);
    l.traverse();
    l.insertFirst(10);
    l.traverse();
    l.insertLast(5);
    l.traverse();
    l.insertLast(9);
    l.traverse();
    l.insertAfter(12, 4);
    l.traverse();
    l.insertBefore(15, 5);
    l.traverse();
    l.deleteFirst();
    l.traverse();
    l.deleteLast();
    l.traverse();
    l.deleteAfter(12);
    l.traverse();
    l.deleteBefore(5);
    l.traverse();
    return 0;
}
