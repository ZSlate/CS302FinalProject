/*Alan Garcia, 04-28-20, class used to hold the edges of the a graph for use in operations*/

#include Node.h

#ifndef EDGE_H
#define EDGE_H

template <class T>
class Edge{
  private:
    int weight;
    T start;
    T end;
   public:
     Edge();
     Edge(T Insert_Start, T Insert_End, int Insert_Weight);
     int getWeight() const;
     T getStart() const;
     T getEnd() const;
     void setWeight(int Insert_Weight);
     void setStart(T Insert_Start);
     void setEnd(T Insert_End);
   };
   #include Edge.cpp
   #endif  
