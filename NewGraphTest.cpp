//
//  NewGraphTest.cpp
//  GitHub Repositorys
//
//  Created by Zachary Slate on 5/4/20.
//  Copyright © 2020 School Work. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <fstream>


typedef std::pair<int, int> vertex;
typedef std::vector<std::list <vertex> > AdjList;

void inputToGraph(AdjList& inputList, int inputSource, int inputDestination, int inputWeight)
{
    inputList[inputSource].push_back(std::make_pair(inputDestination, inputWeight));
    inputList[inputDestination].push_back(std::make_pair(inputSource, inputWeight));
}

void printCompleteAdjacencyList( AdjList &passedList, int &v )
{
    
    for(std::size_t index = 0; index < passedList.size(); ++index){
        
        int nodeCount = passedList[index].size();
        
        if(nodeCount > 0)
        {
            std::cout << index;
            std::list<vertex>::iterator temp = passedList[index].begin();
            while(temp != passedList[index].end())
            {
                std::cout << " -> " << temp->first << " (weight: " << temp->second << ')';
                ++temp;
            }
        }
        else
        {
            std::cout << " -> NONE";
        }
        
        std::cout << std::endl;
    }
}



int main()
{
    int numberOfNodes = 5, totalCost = 0, minimumCost = 999999;
    float gallons;
    std::string possiblePath, bestPath;
    AdjList graph(numberOfNodes);
    inputToGraph(graph, 1, 0, 518);
    inputToGraph(graph, 2, 0, 439);
    inputToGraph(graph, 1, 2, 421);
    inputToGraph(graph, 3, 0, 218);
    inputToGraph(graph, 3, 2, 569);
    inputToGraph(graph, 4, 0, 704);
    inputToGraph(graph, 4, 1, 830);
    inputToGraph(graph, 3, 4, 751);
    
    std::cout << std::endl << "Adjacency List / Graph:" << std::endl;
    printCompleteAdjacencyList(graph, numberOfNodes);
    std::cout << std::endl;
    std::ifstream inputFile;
    inputFile.open("Possible Paths.txt");
    
    while(!inputFile.eof())
    {
        std::getline(inputFile, possiblePath);
        
        for(std::size_t index = 0; possiblePath[index+2]; index++)
        {
            int tempPeekingNode = possiblePath[index] - '0';
            int tempPeekingNextNode = possiblePath[index+1] - '0';
            std::list<vertex>::iterator temp = graph[tempPeekingNode].begin();
            for(; temp->first != tempPeekingNextNode; temp++)
            {
            }
            totalCost+=temp->second;
        }
        
        if(totalCost < minimumCost)
        {
            minimumCost = totalCost;
            bestPath = possiblePath;
        }
        
    }
    
    gallons = minimumCost / 40;
    std::cout << "The best path for the traveling salesman is: " << std::endl;
    for(std::size_t index = 0; index < bestPath.size(); index++)
    {
        int pathIndex = bestPath[index] - '0';
        switch(pathIndex)
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
        
        if(index < bestPath.size()-2)
        {
            std::cout << " -> ";
        }
    }

    std::cout << " (cost = " << gallons << " gallons)" << std::endl << std::endl;
    
    return 0;
}
