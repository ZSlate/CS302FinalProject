//
//  Node.cpp
//  GitHub Repositorys
//
//  Created by Zachary Slate on 4/25/20.
//  Copyright © 2020 School Work. All rights reserved.
//

#ifndef Node_cpp
#define Node_cpp
#include "Node.h"

template<class T>
Node<T>::Node() : next(nullptr)
{
}

template<class T>
Node<T>::Node(const T& anItem) : item(anItem), next(nullptr)
{
}

template<class T>
Node<T>::Node(const T& anItem, int newIden, Node<T>* nextNodePtr) : item(anItem), identifier(newIden), next(nextNodePtr)
{
}

template<class T>
void Node<T>::copyData(const T& anItem, int newIden, Node<T>* nextNodePtr)
{
    setItem(anItem);
    setIdentifier(newIden);
    setNext(nextNodePtr);
}

template<class T>
void Node<T>::setItem(const T& anItem)
{
    item = anItem;
}

template<class T>
void Node<T>::setNext(Node<T>* nextNodePtr)
{
    next = nextNodePtr;
}

template<class T>
T Node<T>::getItem() const
{
    return item;
}

template<class T>
Node<T>* Node<T>::getNext() const
{
    return next;
}

template<class T>
void Node<T>::setIdentifier(int newIden)
{
    identifier = newIden;
}

template<class T>
int Node<T>::getIdentifier() const
{
    return identifier;
}



#endif /* Node_cpp */
