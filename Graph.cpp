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

template<class T>
bool Graph<T>::getBool()
{
    return seen;
}

template<class T>
void Graph<T>::setBool(bool newSeen)
{
    seen = newSeen;
}




#endif /* Graph_cpp */
