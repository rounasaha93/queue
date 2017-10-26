//
// Created by Rounak on 26/10/17.
//

#include "QueueAsBaseClass.h"
#include <iostream>

using namespace std;

//Implementation of Queue as a Base Class using Formula Location(i) = Location(1)+i-1

int mainoff2() {
    int popElement;
    QueueAsBaseClass<int> q(10);
    q.Insert(2300);
    q.Insert(236);
    q.Insert(235);
    q.Insert(234);
    q.Insert(233);
    q.Insert(232);
    q.Insert(231);
    q.Insert(232);
    q.Insert(22);
    q.Insert(312321);
    q.OutputStream(cout);
    q.Delete(popElement);
    q.OutputStream(cout);
    q.Insert(
            312321); //Element Will Not be Inserted even though there is space. This leads us to the Circuilar Queue to utilise this space which is going to waste in this implementation
    q.OutputStream(cout);
    return 0;
}