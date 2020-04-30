//
//  Node.h
//  GitHub Repositorys
//
//  Created by Zachary Slate on 4/25/20.
//  Copyright © 2020 School Work. All rights reserved.
//

#ifndef Node_h
#define Node_h
#include <iostream>

template <class T>
class Cities;

template <class T>
class LinkedStack;

template<class T>
class Node
{
    
    friend class Cities<T>;
    friend class LinkedStack<T>;
    
private:
    T item; // A data item
    int identifier;
    Node<T>* next; // Point to list node

public:
    Node();
    Node(const T& anItem);
    Node(const T& anItem, int newIden, Node<T>* nextNodePtr);
    void copyData(const T& anItem, int newIden, Node<T>* nextNodePtr);
    void setItem(const T& anItem);
    void setNext(Node<T>* nextNodePtr);
    T getItem() const;
    Node<T>* getNext() const;
    void setIdentifier(int newIden);
    int getIdentifier() const;
    
};
#include "Node.cpp"

#endif /* Node_h */
