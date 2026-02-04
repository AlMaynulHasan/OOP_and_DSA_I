#include <iostream>
using namespace std;
#define MAX 5

struct Element {
    int value;
    int priority;
};
class PriorityQueue {
private:
    Element Q[MAX];
    int FRONT, REAR;
public:
    PriorityQueue() {
        FRONT = REAR = -1;
    }
    void QueuePush(int NUM, int PR) {
        if (REAR == MAX - 1) {
            cout << "Queue Overflow!" << endl;
            return;
        }
        if (FRONT == -1 && REAR == -1) {
            FRONT = REAR = 0;
            Q[REAR].value = NUM;
            Q[REAR].priority = PR;
        }
        else {
            int POS = REAR;
            while (POS >= FRONT && Q[POS].priority < PR) {
                Q[POS + 1] = Q[POS];
                POS--;
            }
            Q[POS + 1].value = NUM;
            Q[POS + 1].priority = PR;
            REAR++;
        }
        cout << "Inserted value: " << NUM << " with priority: " << PR << endl;
    }
    int QueuePop() {
        if (FRONT == -1) {
            cout << "Queue Underflow!" << endl;
            return -1;
        }
        int VAL = Q[FRONT].value;
        FRONT++;
        if (FRONT > REAR)
            FRONT = REAR = -1;
        cout << "Deleted value: " << VAL << endl;
        return VAL;
    }
    void Display() {
        if (FRONT == -1) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "\nPriority Queue elements:\n";
        cout << "Value\tPriority\n";
        for (int i = FRONT; i <= REAR; i++) {
            cout << Q[i].value << "\t" << Q[i].priority << endl;
        }cout << endl;
    }
};
int main() {
    PriorityQueue pq;
    pq.QueuePush(10, 2);
    pq.QueuePush(20, 5);
    pq.QueuePush(30, 1);
    pq.Display();
    pq.QueuePop();
    pq.Display();
    pq.QueuePush(40, 3);
    pq.Display();
    return 0;
}
