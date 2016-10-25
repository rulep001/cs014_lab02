#include <iostream>
#include "IntList.h"

using namespace std;

IntList::IntList() {
    dummyHead = new IntNode(0);
    dummyTail = new IntNode(0);
    
    dummyHead->next = dummyTail;
    dummyTail->prev = dummyHead;
}

IntList::~IntList() {
    while (dummyHead->next != dummyTail) {
        pop_front();
    }
    delete dummyHead;
    delete dummyTail;
}

void IntList::push_front(int value) {
    IntNode *temp = new IntNode(value);
    
    temp->prev = dummyHead;
    temp->next = dummyHead->next;
    
    dummyHead->next->prev = temp;
    dummyHead->next = temp;
}

void IntList::pop_front() {
    if (dummyHead->next == dummyTail) {
        return;
    }
    IntNode *temp = dummyHead->next;
    dummyHead->next = temp->next;
    temp->next->prev = dummyHead;
    delete temp;
}

void IntList::push_back(int value) {
    IntNode *temp = new IntNode(value);
    
    temp->next = dummyTail;
    temp->prev = dummyTail->prev;
    dummyTail->prev = temp;
    temp->prev->next = temp;
}

void IntList::pop_back() {
    if (dummyTail->prev == dummyHead) {
        return;
    }
    
    IntNode *temp = dummyTail->prev;
    dummyTail->prev = temp->prev;
    temp->prev->next = dummyTail;
    delete temp;
}

bool IntList::empty() const {
    if (dummyHead->next == dummyTail) {
        return true;
    }
    else {
        return false;
    }
}

ostream & operator<<(ostream &out, const IntList &rhs) {
    for (IntNode *curr = rhs.dummyHead->next; curr != rhs.dummyTail; curr = curr->next) {
        if (curr != rhs.dummyTail->prev) {
            out << curr->data << " ";
        }
        else {
            out << curr->data;
        }
    }
    return out;
}

void IntList::printReverse() const {
    for (IntNode *curr = dummyTail->prev; curr != dummyHead; curr = curr->prev) {
        if (curr != dummyHead->next) {
            cout << curr->data << " ";
        }
        else {
            cout << curr->data;
        }
    }
}