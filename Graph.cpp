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
    for(int index = 0; index < numberOfEdges; ++index){
        if(edges[index].getStart()==ID){
            Node<T>* tempNode = new Node<T>(edges.getWeight(), edges.getEnd(), nullptr);
            Node<T>* curr=vertex->getNext();
            if(vertex->getNext()==nullptr){
                vertext->setNext(tempNode);
            }
            else{
                while(curr->getNext()!=nullptr||curr->getNext()->getIdentifier()>ID){
                    curr=curr->getNext();
                }
                if(curr->getNext()==nullptr){
                    curr->setNext(tempNode);
                }
                else{
                    Node<T>* temp= curr->getNext();
                    curr->setNext(tempNode);
                    curr->getNext()->setNext(temp);
                }
            }
        }
        else{
            if(edges[index].getEnd()==ID){
                Node<T>* tempNode = new Node<T>(edges.getWeight(), edges.getStart(), nullptr);
                Node<T>* curr=vertex->getNext();
                if(vertex->getNext()==nullptr){
                    vertext->setNext(tempNode);
                }
                else{
                    while(curr->getNext()!=nullptr||curr->getNext()->getIdentifier()>ID){
                        curr=curr->getNext();
                    }
                    if(curr->getNext()==nullptr){
                        curr->setNext(tempNode);
                    }
                    else{
                        Node<T>* temp= curr->getNext();
                        curr->setNext(tempNode);
                        curr->getNext()->setNext(temp);
                    }
                }
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
T Graph<T>::traverse(int * version, Node<T>* vertex, T total){
    if(vertex->getIdentifier()==head[0]->getIdentifier()){
        if(seen[head[0]->getIdentifier()]){
            for(int index=0; index<10; ++index){
                seen[index]=false;
            }
            total=total+vertex->getData();
            return total;
        }
        else{
            seen[0]=true;
            Node<T>* curr=head[0];
            while(curr->getIdentifier()!=*version){
               curr=curr->getNext();
            }
            total=traverse(++version, head[curr->getIdentifier()], total);
        }
    }
    else{
        seen[vertex->getIdentifier()];
        total=total+vertex->getData();
        Node<T>* curr=vertex->getNext();
        int Nodes=0;
        bool breakcase=false;
        for(int index=0; breakcase==true||index!=*version; curr=curr->getNext()){
            if(seen[curr->getIdentifier()]==false){
                ++index;
            }
            ++Nodes;
            if(Nodes==getAdjecentNodes(vertex)){
                if(index==0){
                    breakcase=true;
                }
                else{
                    curr=vertex;
                }
            }
        }
        if(breakcase==true){
            total=traverse(version, head[0], total);
        }
        else{
            total=traverse(++version, head[curr->getIdentifier()],total);
        }
    }
    return total;
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
