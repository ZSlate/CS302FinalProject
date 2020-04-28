//
//  Cities.h
//  GitHub Repositorys
//
//  Created by Zachary Slate on 4/25/20.
//  Copyright © 2020 School Work. All rights reserved.
//

#ifndef Cities_h
#define Cities_h
#define MPG 40
#include "Node.h"

template <class T>
class Cities
{
    
private:
    std::string name;
    int distance[10]; //this array is intended to hold the distance in miles of all cities linked to this city
    
public:
    
    std::string getName(); //returns name of the city for the purpose of identifying them when searching through the graph
    
};

#endif /* Cities_h */
