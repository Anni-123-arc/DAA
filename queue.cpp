//aniket khandare
#include <iostream>
using namespace std;

#define SIZE 5

class Queue {
private:
    int items[SIZE];
    int front;
    int rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isFull() {
        if (front == 0 && rear == SIZE - 1) {
            return true;
        }
        return false;
    }

    bool isEmpty() {
        if (front == -1) {
            return true;
        }
        return false;
    }

    void enqueue(int element) {
        if (isFull()) {
            cout << "Queue is full" << endl;
        } else {
            if (front == -1) {
                front = 0;
            }
            rear++;
            items[rear] = element;
            cout << "Inserted " << element << endl;
        }
    }

    int dequeue() {
        int element;
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        } else {
            element = items[front];
            if (front >= rear) {
                front = -1;
                rear = -1;
            } else {
                front++;
            }
            cout << "Deleted " << element << endl;
            return element;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
        } else {
            cout << "Queue elements are:" << endl;
            for (int i = front; i <= rear; i++) {
                cout << items[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue q;

    // Queueing elements
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    // Display queue elements
    q.display();

    // Deleting elements from queue
    q.dequeue();
    q.dequeue();

    // Display queue elements after deletion
    q.display();

    // Adding more elements to queue after deletion
    q.enqueue(6);
    q.enqueue(7);

    // Display queue elements after addition
    q.display();

    return 0;
}
