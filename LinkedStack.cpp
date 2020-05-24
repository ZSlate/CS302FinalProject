//
//  LinkedStack.cpp
//  Homework
//
//  Created by Zachary Slate on 2/12/20.
//  Copyright © 2020 Zachary Slate. All rights reserved.
//

#ifndef LinkedStack_cpp
#define LinkedStack_cpp
#include "LinkedStack.h"

template <class T>
LinkedStack<T>::LinkedStack() : top(nullptr)
{
}

template <class T>
LinkedStack<T>::LinkedStack(const LinkedStack<T>& newLinkedStack)
{
    Node<T>* tempNew = newLinkedStack.top;
    if(tempNew == nullptr)
    {
        top = nullptr;
    }
    else
    {
        top = new Node<T>();
        Node<T>* temp = top;
        while(tempNew)
        {
            temp->item = tempNew->item;
            temp->next = new Node<T>;
            temp = temp->next;
            tempNew = tempNew->next;
        }
    }
}

template <class T>
LinkedStack<T>::~LinkedStack()
{
    while(!(isEmpty()))
    {
        pop();
    }
}

template <class T>
LinkedStack<T> & LinkedStack<T>::operator= (const LinkedStack<T> & assignedLinkedStack)
{
    Node<T>* tempNew = assignedLinkedStack.top;
    if(tempNew == nullptr)
    {
        top = nullptr;
    }
    else
    {
        top = new Node<T>();
        Node<T>* temp = top;
        while(tempNew)
        {
            temp->item = tempNew->item;
            temp->next = new Node<T>;
            temp = temp->next;
            tempNew = tempNew->next;
        }
    }
    return *this;
}

template <class T>
void LinkedStack<T>::push(const Node<T>& newNode)
{
    if(top == nullptr)
    {
        top = new Node<T>();
    }
    Node<T>* placeHolder = new Node<T>(newNode.item, top);
    top = placeHolder;
    placeHolder = nullptr;
}

template <class T>
T LinkedStack<T>::pop()
{
    T returner;
    if (!isEmpty())
    {
        Node<T>* temp = top;
        returner = top->getItem();
        top = top->getNext();
        temp->setNext(nullptr);
        delete temp;
        temp = nullptr;
        return returner;
    }
    return 0;
}

template <class T>
T LinkedStack<T>::peek()
{
    assert(!isEmpty());
    return top->getItem();
}

template <class T>
void LinkedStack<T>::clear()
{
    while(!(isEmpty()))
    {
        pop();
    }
}

template <class T>
bool LinkedStack<T>::isEmpty()
{
    return top == nullptr;
}

template <class T>
bool LinkedStack<T>::isFull()
{
    if(isEmpty())
    {
        return false;
    }
    else
    {
        return true;
    }
}

template<class T>
void LinkedStack<T>::displayStack()
{
    Node<T> *temp = top;
    if(temp == nullptr)
    {
        std::cout << "NULL" << std::endl;
        return;
    }
    if(temp)
    {
        while(temp)
        {
            std::cout << temp->item << ' ';
            temp = temp->next;
        }
        std::cout << std::endl;
    }
}

#endif /* LinkedStack_cpp */
