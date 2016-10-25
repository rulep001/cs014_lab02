#include <iostream>

#include "IntList.h"

using namespace std;

int main()
{
    IntList list1;
    
    cout << "Is empty: " << list1.empty() << endl;
    
    cout << "Push back 1" << endl;
    list1.push_back(1);
    cout << list1 << endl;
    cout << "Push back 2" << endl;
    list1.push_back(2);
    cout << list1 << endl;
    cout << "Push back 3" << endl;
    list1.push_back(3);
    cout << list1 << endl;
    cout << "Push back 4" << endl;
    list1.push_back(4);
    cout << list1 << endl;
    cout << "Push front 5" << endl;
    list1.push_front(5);
    cout << list1 << endl;
    cout << "Pop front" << endl;
    list1.pop_front();
    cout << list1 << endl;
    cout << "Pop back" << endl;
    list1.pop_back();
    cout << list1 << endl;
    
    list1.printReverse();
    cout << endl;
    cout << "Is empty: " << list1.empty() << endl;
    
    return 0;
}