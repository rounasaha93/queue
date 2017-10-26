//
// Created by Rounak on 26/10/17.
//

#ifndef QUEUE_QUEUEBYINHERITANCE_H
#define QUEUE_QUEUEBYINHERITANCE_H

#include "LinearList.h"

/*
 *
 * NOTE : QUEUE IS A SPECIAL CASE OF A LINEAR LIST
 *
 * ADDITIONS HAPPEN AT THE END
 * DELETIONS HAPPEN AT THE FRONT
 *
 *
 */
template<class T>
class QueueByInheritance : private LinearList<T> {
public:
    //Constructor
    QueueByInheritance(int MaxSize) : LinearList<T>(MaxSize) {}

    bool isEmpty() {
        return LinearList<T>::isEmpty();
    }

    bool isFull() {
        return LinearList<T>::lengthOfList() == LinearList<T>::getMaxSize();
    }

    QueueByInheritance<T> &Insert(const T &x) {
        if (!isFull()) {
            LinearList<T>::Insert(LinearList<T>::lengthOfList(), x);
        } else {
            cout << "List is Full. Please delete element and try again !" << endl;
        }
        return *this;
    }

    QueueByInheritance<T> &Delete(T &x) {
        if (!isEmpty()) {
            LinearList<T>::Delete(1, x);
        } else {
            cout << "List is empty. Please insert some elements to try again !" << endl;
        }
        return *this;
    }

};


#endif //QUEUE_QUEUEBYINHERITANCE_H
