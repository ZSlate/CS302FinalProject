//
//  Node.h
//  GitHub Repositorys
//
//  Created by Zachary Slate on 4/25/20.
//  Copyright © 2020 School Work. All rights reserved.
//

#ifndef Node_h
#define Node_h

template <class T>
class Cities;

template<class T>
class Node
{
    
    friend class Cities<T>;
    
private:
    T item; // A data item
    Node<T>* left; // Point to left node
    Node<T>* right; // Point to right node
    
public:
    Node();
    Node(const T& anItem);
    Node(const T& anItem, Node<T>* nextNodePtr);
    void setItem(const T& anItem);
    void setLeft(Node<T>* nextNodePtr);
    void setRight(Node<T>* nextNodePtr);
    T getItem() const;
    Node<T>* getLeft() const;
    Node<T>* getRight() const;
    
};
#include "Node.cpp"

#endif /* Node_h */
