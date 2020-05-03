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
    
    for(std::size_t index = 0; index < numberOfVertices; index++)
    {
        head[index] = new Node<T>(0, index, nullptr);
        makeAdjList(head[index], index, edges, numberOfEdges);
    }
}

template <class T>
vois Graph<T>::makeAdjList(Node<T>* vertex, int ID, Egde<T> edges[], int numberOfEdges){
    Node<T> * curr=vertex;
    for(int index = 0; index < numberOfEdges; ++index){
        if(edges[index].getStart()==ID){
            Node<T>* tempNode = new Node<T>(edges.getWeight(), edges.getEnd(), nullptr);
            curr->setNext(tempNode);
            curr=curr->getNext();
        }
        else{
            if(edges[index].getEnd()==ID){
                Node<T>* tempNode = new Node<T>(edges.getWeight(), edges.getStart(), nullptr);
                curr->setNext(tempNode);
                curr=curr->getNext();
            }
        }
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
            total=total+vertex->getData();
            return total;
        }
        else{
            
    }
}

template <class T>
int Graph<T>::getAdjecentNodes(Node<T>* vertex){
    int total;
    for(Node<T>* curr=head[vertex]; curr!=nullptr;curr=curr->getNext()){
        ++total;
    }
    return total;
}
    
template <class T>
int Graph<T>::getNumberOfNodes() const{
    return numberOfNodes;
}
#endif /* Graph_cpp */
