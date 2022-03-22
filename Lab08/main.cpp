/** -----------------------------------------------------------------------------
 *
 * @file  LinkedList.cpp
 * @author Audrey Pino
 * Assignment:   EECS-268 Lab 8
 * @brief Implementation of timing.
 * @date 11/22/21
 *
 ---------------------------------------------------------------------------- **/
#include <iostream>
#include <stdio.h>
#include <time.h> 
#include "Stack.h"
#include "LinkedList.h"
#include "Queue.h"
#include "fstream"

int timeStackPop() {
    std::ofstream outFile;
    outFile.open("StackPop.txt");
    Stack<int> testStack;
    for (int j = 1; j <= 100; j++) {
        for (int i = 0; i < 1000; i++) {
            testStack.push(i);
        }
        clock_t t;
        t = clock();
        printf("Popping...\n");
        testStack.pop();
        printf("Popped\n");
        t = clock() - t;
        outFile << ((float) t)/CLOCKS_PER_SEC << " ";
        printf("It took %d clocks (%f seconds).\n", (int) t, ((float) t) / CLOCKS_PER_SEC);
    }
    return 0;
}

int timeStackDestructor() {
    std::ofstream outFile;
    outFile.open("StackDestructor.txt");
    for (int j = 1; j <= 100; j++) {
        Stack<int> testStack;
        for (int i = 0; i <= j * 1000; i++) {
            testStack.push(i);
        }
        clock_t t;
        t = clock();
        printf("Destroying\n");
        testStack.~Stack();
        printf("Destroyed\n");
        t = clock() - t;
        outFile << ((float) t)/CLOCKS_PER_SEC << " ";
        printf("It took %d clocks (%f seconds).\n", (int) t, ((float) t) / CLOCKS_PER_SEC);
    }
    return 0;
}

int timeEnqueue() {
    std::ofstream outFile;
    outFile.open("Enqueue.txt");
    Queue<int> testQueue;
    for (int j = 1; j <= 100; j++) {
        for (int i = 0; i < 1000; i++) {
            testQueue.enqueue(i);
        }
        clock_t t;
        t = clock();
        printf("Queueing...\n");
        testQueue.enqueue(j);
        printf("Queued\n");
        t = clock() - t;
        outFile << ((float) t)/CLOCKS_PER_SEC << " ";
        printf("It took %d clocks (%f seconds).\n", (int) t, ((float) t) / CLOCKS_PER_SEC);
    }
    return 0;
}

int timeLinkedList1() {
    std::ofstream outFile;
    outFile.open("LinkedList1.txt");
    LinkedList<int> testList;
    for (int j = 1; j <= 100; j++) {
        for (int i = 0; i < 1000; i++) {
            testList.insert(i,i);
        }
        clock_t t;
        t = clock();
        printf("Inserting at index 1...\n");
        testList.insert(1,j);
        printf("Done\n");
        t = clock() - t;
        outFile << ((float) t)/CLOCKS_PER_SEC << " ";
        printf("It took %d clocks (%f seconds).\n", (int) t, ((float) t) / CLOCKS_PER_SEC);
    }
    return 0;
}

int timeLinkedListLast() {
    std::ofstream outFile;
    outFile.open("LinkedListLast.txt");
    LinkedList<int> testList;
    for (int j = 1; j <= 100; j++) {
        for (int i = 0; i < 1000; i++) {
            testList.insert(0,i);
        }
        clock_t t;
        t = clock();
        printf("Inserting at last index...\n");
        testList.insert(testList.getLength()-1,j);
        printf("Done\n");
        t = clock() - t;
        outFile << ((float) t)/CLOCKS_PER_SEC << " ";
        printf("It took %d clocks (%f seconds).\n", (int) t, ((float) t) / CLOCKS_PER_SEC);
    }
    return 0;
}

int timePrintAll() {
    std::ofstream outFile;
    outFile.open("PrintAll.txt");
    LinkedList<int> testList;
    for (int j = 1; j <= 100; j++) {
        for (int i = 0; i < 1000; i++) {
            testList.insert(0,i);
        }
        clock_t t;
        t = clock();
        printf("Printing all values of List\n");
        for (int k = 0; k<j*1000; k++) {
            std::cout << testList.getEntry(k);
        }
        printf("Done\n");
        t = clock() - t;
        outFile << ((float) t)/CLOCKS_PER_SEC << " ";
        printf("It took %d clocks (%f seconds).\n", (int) t, ((float) t) / CLOCKS_PER_SEC);
    }
    return 0;
}

int main ()
{
    timeStackPop();
    timeStackDestructor();
    timeEnqueue();
    timeLinkedList1();
    timeLinkedListLast();
    timePrintAll();
    return 0;
}

