/*Alan Garcia, 04-28-20, Source file for the Edge class*/

#include Edge.h

template <class T>
Edge<T>::Edge()
  :weight(0){
  }
  
  template <class T>
  Edge<T>::Edge(T Insert_Start, T Insert_End, int Insert_Weight)
    :start(Insert_Start), end(Insert_End), weight(Insert_Weight){
    }
    
  template <class T>
  int Edge<T>::getWeight() const{
    return weight;
    }
    
  template <class T>
  T Edge<T>::getStart() const{
    return start;
    }
  
  template <class T>
  T Edge<T>::getEnd() const{
    return end;
    }
    
  template <class T>
  void Edge<T>::setWeight(int Insert_Weight){
    weight=Insert_Weight;
    }
    
  template <class T>
  void Edge<T>::setStart(T Insert_Start){
    start=Insert_Start;
    }
    
  template <class T>
  void Edge<T>::setEnd(T Insert_End){
    end=Insert_End;
    }
  
