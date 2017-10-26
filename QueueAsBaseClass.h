//
// Created by Rounak on 26/10/17.
//

#ifndef QUEUE_QUEUEASBASECLASS_H
#define QUEUE_QUEUEASBASECLASS_H

#include <iostream>

using namespace std;

template<class T>
class QueueAsBaseClass {
public :
    QueueAsBaseClass(int MaxSize = 10);

    ~QueueAsBaseClass() { delete[] queueElements; }

    bool const queueIsFull();

    bool const queueIsEmpty();

    QueueAsBaseClass<T> &Insert(const T &x);

    QueueAsBaseClass<T> &Delete(T &x);

    void OutputStream(ostream &out) const;

private :
    int MaxSize;
    T *queueElements;
    int front;
    int rear;
};

template<class T>
QueueAsBaseClass<T>::QueueAsBaseClass(int maxSize) {
    MaxSize = maxSize;
    front = 0;
    rear = 0;
    queueElements = new T[MaxSize];
}

template<class T>
bool const QueueAsBaseClass<T>::queueIsEmpty() {
    if (front == rear) {
        return true;
    } else {
        return false;
    }
}

template<class T>
bool const QueueAsBaseClass<T>::queueIsFull() {
    if (rear == MaxSize) {
        return true;
    } else {
        return false;
    }
}

template<class T>
QueueAsBaseClass<T> &QueueAsBaseClass<T>::Insert(const T &x) {
    if (!queueIsFull()) {
        queueElements[rear] = x;
        rear++;
    } else {
        cout << "Queue is Full. Please try again !" << endl;
    }
    return *this;
}

template<class T>
QueueAsBaseClass<T> &QueueAsBaseClass<T>::Delete(T &x) {
    if (!queueIsEmpty()) {
        x = queueElements[front];
        front++;
    } else {
        cout << "Queue is Empty. Please try again !" << endl;
    }
    return *this;
}

template<class T>
void QueueAsBaseClass<T>::OutputStream(ostream &out) const {
    for (int i = front; i < rear; i++) {
        out << queueElements[i] << " ";
    }
    cout << endl;
}

#endif //QUEUE_QUEUEASBASECLASS_H
