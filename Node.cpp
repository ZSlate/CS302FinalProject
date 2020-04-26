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
Node<T>::Node() : left(nullptr), right(nullptr)
{
}

template<class T>
Node<T>::Node(const T& anItem) : item(anItem), left(nullptr), right(nullptr)
{
}

template<class T>
Node<T>::Node(const T& anItem, Node<T>* nextNodePtr) : item(anItem), left(nextNodePtr), right(nextNodePtr)
{
}

template<class T>
void Node<T>::setItem(const T& anItem)
{
    item = anItem;
}

template<class T>
void Node<T>::setLeft(Node<T>* nextNodePtr)
{
    left = nextNodePtr;
}

template<class T>
void Node<T>::setRight(Node<T>* nextNodePtr)
{
    right = nextNodePtr;
}

template<class T>
T Node<T>::getItem() const
{
    return item;
}

template<class T>
Node<T>* Node<T>::getLeft() const
{
    return left;
}

template<class T>
Node<T>* Node<T>::getRight() const
{
    return right;
}

#endif /* Node_cpp */
