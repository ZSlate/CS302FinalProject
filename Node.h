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
    bool seen;
    //stack
    Node<T>* list; // Point to list node

public:
    Node();
    Node(const T& anItem);
    Node(const T& anItem, Node<T>* nextNodePtr);
    void setItem(const T& anItem);
    void setList(Node<T>* nextNodePtr);
    void setBool(bool newSeen);
    T getItem() const;
    bool getBool();
    Node<T>* getList() const;
    
};
#include "Node.cpp"

#endif /* Node_h */
