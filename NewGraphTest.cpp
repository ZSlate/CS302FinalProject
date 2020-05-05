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
    int numberOfNodes = 5;
    int numberOfEdges = 5;
    AdjList graph(numberOfNodes);
    inputToGraph(graph, 1, 0, 518);
    inputToGraph(graph, 2, 0, 439);
    inputToGraph(graph, 1, 2, 421);
    inputToGraph(graph, 3, 0, 218);
    inputToGraph(graph, 3, 2, 569);
    inputToGraph(graph, 4, 0, 704);
    inputToGraph(graph, 4, 1, 830);
    inputToGraph(graph, 3, 4, 751);
    printCompleteAdjacencyList(graph, numberOfNodes);
    
    return 0;
}
