/*Alan Garcia, 04-28-20, class used to hold the edges of the a graph for use in operations*/

#include "Node.h"

#ifndef EDGE_H
#define EDGE_H

template <class T>
class Edge{
  private:
    T weight;
    int start;
    int end;
   public:
     Edge();
     Edge(int Insert_Start, int Insert_End, int Insert_Weight);
     int getWeight() const;
     int getStart() const;
     int getEnd() const;
     void setWeight(int Insert_Weight);
     void setStart(int Insert_Start);
     void setEnd(int Insert_End);
   };
   #include "Edge.cpp"
   #endif  
