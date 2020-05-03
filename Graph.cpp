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
    head = new Node<T>*[numberOfVertices]();
    numberOfNodes = numberOfVertices;
    
    for(std::size_t index = 0; index < numberOfVertices; index++)
    {
        head[index] = nullptr;
        seen[index] = false;
    }
    
    for(std::size_t index = 0; index < numberOfEdges; index++)
    {
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
    }
    delete[] head;
}

template <class T>
void Graph<T>::displayAdjacencyList()
{
    
    for(std::size_t index = 0; index < numberOfNodes; index++)
    {
        Node<T>* temp = head[index];
        while(temp != nullptr)
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
            
            switch (temp->getIdentifier())
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
            
            std::cout << ", " << temp->getItem() << ")   ";
            temp = temp->getNext();
            
        }
        std::cout << std::endl;
    }
    
}

template <class T>
T Graph<T>::traverse(int version, Node<T>* vertex, T total){
    if(vertex->getIdentifier()==head[0]->getIdentifier()){
        if(seen[head[0]->getIdentifier()]){
            for(int index=0; index<10; ++index){
                seen[index]=false;
            }
            return total;
        }
        else{
            
    }
}

#endif /* Graph_cpp */
