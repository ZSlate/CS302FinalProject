//
//  LinkedStack.h
//  Homework
//
//  Created by Zachary Slate on 2/12/20.
//  Copyright © 2020 Zachary Slate. All rights reserved.
//
#ifndef LinkedStack_h
#define LinkedStack_h
#include "Node.h"

template <class T>
class LinkedStack
{
public:
    LinkedStack();
    LinkedStack(const LinkedStack<T>& newLinkedStack);
    LinkedStack<T> & operator= (const LinkedStack<T> & assignedLinkedStack);
    ~LinkedStack();
    void push(const Node<T>& newNode);
    T pop();
    T peek();
    void clear();
    bool isEmpty();
    bool isFull();
    void displayStack();
    
private:
    Node<T>* top;
    size_t counter;
};


#include "LinkedStack.cpp"
#endif /* LinkedStack_h */
