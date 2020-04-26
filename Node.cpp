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
Node<T>::Node() : list(nullptr)
{
}

template<class T>
Node<T>::Node(const T& anItem) : item(anItem), list(nullptr)
{
}

template<class T>
Node<T>::Node(const T& anItem, Node<T>* nextNodePtr) : item(anItem), list(nextNodePtr)
{
}

template<class T>
void Node<T>::setItem(const T& anItem)
{
    item = anItem;
}

template<class T>
void Node<T>::setList(Node<T>* nextNodePtr)
{
    list = nextNodePtr;
}

template<class T>
void Node<T>::setBool(bool newSeen)
{
    seen = newSeen;
}

template<class T>
T Node<T>::getItem() const
{
    return item;
}

template<class T>
bool Node<T>::getBool()
{
    return seen;
}

template<class T>
Node<T>* Node<T>::getList() const
{
    return list;
}

#endif /* Node_cpp */
