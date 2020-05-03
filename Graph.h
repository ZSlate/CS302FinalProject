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
#include "LinkedStack.h"
template <class T>
class Graph
{
    
private:
    int numberOfNodes;
    Node<T>** head;
    bool seen[10];
    LinkedStack list;
public:
    
    Graph(Edge<T> edges[], int numberOfEdges, int numberOfVertices);
    ~Graph();
    void displayAdjacencyList();
    T traverse(int version, Node<T>* vertex, T total);
    int getAdjecentNodes(Node<T>* vertex);
    int getNumberOfNodes() const;
};
//bool seen

//
#include "Graph.cpp"
#endif /* Graph_h */
