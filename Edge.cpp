/*Alan Garcia, 04-28-20, Source file for the Edge class*/

#ifndef EDGE_CPP
#define EDGE_CPP
#include "Edge.h"

template <class T>
Edge<T>::Edge()
  :weight(0), start(0), end(0){
  }
  
  template <class T>
  Edge<T>::Edge(int Insert_Start, int Insert_End, T Insert_Weight)
    :start(Insert_Start), end(Insert_End), weight(Insert_Weight){
    }
    
  template <class T>
  T Edge<T>::getWeight() const{
    return weight;
    }
    
  template <class T>
  int Edge<T>::getStart() const{
    return start;
    }
  
  template <class T>
  int Edge<T>::getEnd() const{
    return end;
    }
    
  template <class T>
  void Edge<T>::setWeight(T Insert_Weight){
    weight=Insert_Weight;
    }
    
  template <class T>
  void Edge<T>::setStart(int Insert_Start){
    start=Insert_Start;
    }
    
  template <class T>
  void Edge<T>::setEnd(int Insert_End){
    end=Insert_End;
    }
  
   #endif
