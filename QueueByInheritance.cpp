//
// Created by Rounak on 26/10/17.
//

#include "QueueByInheritance.h"

//Method to implement testing of Queue
int mainOff() {
    QueueByInheritance<int> q(20);
    int element;
    q.Insert(5);
    q.Insert(23);
    q.Delete(element);
    cout << element;
}