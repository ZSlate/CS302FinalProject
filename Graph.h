//
//  Graph.h
//  GitHub Repositorys
//
//  Created by Zachary Slate on 4/25/20.
//  Copyright © 2020 School Work. All rights reserved.
//

#ifndef Graph_h
#define Graph_h
#include "Node.h"
#include "Edge.h"
#include "Stack.h"
template <class T>
class Graph
{
    
private:
    int numberOfNodes;
    Node<T>** head;
    bool seen[10];
    stack list;
public:
    
    Graph(Edge<T> edges[], int numberOfEdges, int numberOfVertices);
    ~Graph();
    void displayAdjacencyList();
    T traverse(int version, Node<T>* vertex, T total);
};
//bool seen

//
#include "Graph.cpp"
#endif /* Graph_h */
