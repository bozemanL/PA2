//
// Created by Manju Muralidharan on 10/19/25.
//

#ifndef HEAP_H
#define HEAP_H

#include <iostream>
using namespace std;

struct MinHeap {
    int data[64];
    int size;

    MinHeap() { size = 0; }

    void push(int idx, int weightArr[]) {
        data[size] = idx;
        upheap(size, weightArr); // TODO implement upheap!!
        size++;
    }

    int pop(int weightArr[]) {
        if (size == 0) {
            cout << "Heap is empty" << endl;
            return -1;
        }

        int minIdx = data[0];
        size--;
        data[0] = data[size];

        if (size > 0) {
            downheap(0, weightArr);
        }

        return minIdx;
    }

    void upheap(int pos, int weightArr[]) {
        // TODO: swap child upward while smaller than parent
    }

    void downheap(int pos, int weightArr[]) {
        // TODO: swap parent downward while larger than any child
    }
};

#endif