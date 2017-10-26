//
// Created by Rounak on 26/10/17.
//

#ifndef QUEUE_CIRCULARQUEUE_H
#define QUEUE_CIRCULARQUEUE_H

#include <iostream>

using namespace std;

template<class T>
class CircularQueue {
public:
    CircularQueue(int maxSize);

    ~CircularQueue() { delete[] queueElements; }

    bool isEmpty() { return front == rear; }

    bool isFull() { return (rear + 1) % maxSize == front; }

    CircularQueue<T> &Insert(const T &x);

    CircularQueue<T> &Delete(T &x);

    void OutputStream(ostream &out) const;

private:
    int front, rear, maxSize;
    T *queueElements;
};

template<class T>
CircularQueue<T>::CircularQueue(int mSize) {
    maxSize = mSize;
    front = 0;
    rear = 0;
    queueElements = new T(maxSize);
}

template<class T>
CircularQueue<T> &CircularQueue<T>::Insert(const T &x) {
    if (!isFull()) {
        rear = (rear + 1) % maxSize;
        queueElements[rear] = x;
    } else {
        cout << "Queue is Full. Please try later !" << endl;
    }
    return *this;
}

template<class T>
CircularQueue<T> &CircularQueue<T>::Delete(T &x) {
    if (!isEmpty()) {
        front = (front + 1) % maxSize;
        x = queueElements[front];
    } else {
        cout << "Queue is empty. Please try again later !" << endl;
    }
    return *this;
}

template<class T>
void CircularQueue<T>::OutputStream(ostream &out) const {
    //Case 1: When rear>front
    if (rear > front) {
        for (int i = front + 1; i <= rear; i++) {
            cout << queueElements[i] << " ";
        }
    } else { //Case 2: When front>rear
        for (int i = front + 1; i < maxSize; i++) {
            cout << queueElements[i] << " ";
        }
        for (int i = 0; i <= rear; i++) {
            cout << queueElements[i] << " ";
        }
    }
    cout << endl;
}

#endif //QUEUE_CIRCULARQUEUE_H
