//
//  Graph.cpp
//  GitHub Repositorys
//
//  Created by Zachary Slate on 4/25/20.
//  Copyright © 2020 School Work. All rights reserved.
//

#ifndef Graph_cpp
#define Graph_cpp
#include "Graph.h"

template <class T>
Graph<T>::Graph(Edge<T> edges[], int numberOfEdges, int numberOfVertices)
{
    //Node<T>* tempNode = new Node<T>();
    head = new Node<T>*[numberOfVertices]();
    numberOfNodes = numberOfVertices;
    
    for(std::size_t index = 0; index < numberOfVertices; index++)
    {
        head[index] = nullptr;
    }
    
    for(std::size_t index = 0; index < numberOfEdges; index++)
    {
////        tempNode->copyData(edges[index].getWeight(), edges[index].getEnd(), head[edges[index].getStart()]);
//        tempNode->setItem(edges[index].getWeight());
//        tempNode->setIdentifier(edges[index].getEnd());
//        tempNode->setNext(head[edges[index].getEnd()]);
//        head[edges[index].getStart()] = tempNode;
        
        int tempStart = edges[index].getStart();
        int tempEnd = edges[index].getEnd();
        int tempWeight = edges[index].getWeight();
        Node<T>* tempNode = new Node<T>(tempWeight, tempEnd, head[tempStart]);
        head[tempStart] = tempNode;
    }
}

template <class T>
Graph<T>::~Graph()
{
    for(std::size_t index = 0; index < numberOfNodes; index++)
    {
        delete[] head[index];
        delete[] head;
    }
}

template <class T>
void Graph<T>::displayAdjacencyList()
{
    for(std::size_t index = 0; head[index] != nullptr; index++)
    {
        std::cout << '(';
        
        switch (index)
        {
            case 0:
                std::cout << "Reno";
                break;
            case 1:
                std::cout << "Salt Lake City";
                break;
            case 2:
                std::cout << "Las Vegas";
                break;
            case 3:
                std::cout << "San Fransisco";
                break;
            case 4:
                std::cout << "Seattle";
                break;
            default:
                break;
        }
        
        std::cout << ", ";
        
        switch (head[index]->getIdentifier())
        {
            case 0:
                std::cout << "Reno";
                break;
            case 1:
                std::cout << "Salt Lake City";
                break;
            case 2:
                std::cout << "Las Vegas";
                break;
            case 3:
                std::cout << "San Fransisco";
                break;
            case 4:
                std::cout << "Seattle";
                break;
            default:
                break;
        }
        
        std::cout << ", " << head[index]->getItem() << ')';
        head[index] = head[index]->getNext();
    }
    std::cout << std::endl;
}

#endif /* Graph_cpp */
