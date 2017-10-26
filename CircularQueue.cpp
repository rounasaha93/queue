//
// Created by Rounak on 26/10/17.
//

#include "CircularQueue.h"
#include <iostream>

using namespace std;

int main() {
    int popElement;
    CircularQueue<int> q(5);
    q.Insert(1);
    q.Insert(2);
    q.Insert(3);
    q.Insert(4);
    q.Insert(5);
    q.OutputStream(cout);
    q.Delete(popElement);
    q.OutputStream(cout);
    q.Insert(52);
    q.Insert(41);
    q.OutputStream(cout);
    return 0;
}
