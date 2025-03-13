#include <forward_list>
#include "ll.h"
#include <iostream>
using namespace std;

template<class T>
// TO DO
void printList(forward_list<T>& L) {
   
}

int main() {
    forward_list<int> alist;
    int nums[5] = {2, 7, 10, 12, 9};
    for (int i = 0; i < 5; i++) {
        alist.push_front(nums[i]);
    }
    printList(alist);
    return 0;
}