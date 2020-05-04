#include "FinalProject.h"


int main(int argc, const char * argv[])
{
    int numberOfVertices = 5;
    Edge<int> cityEdges[8];
    cityEdges[0].setStart(3);
    cityEdges[0].setEnd(4);
    cityEdges[0].setWeight(751);
    cityEdges[1].setStart(3);
    cityEdges[1].setEnd(0);
    cityEdges[1].setWeight(218);
    cityEdges[2].setStart(3);
    cityEdges[2].setEnd(2);
    cityEdges[2].setWeight(569);
    cityEdges[3].setStart(2);
    cityEdges[3].setEnd(0);
    cityEdges[3].setWeight(439);
    cityEdges[4].setStart(4);
    cityEdges[4].setEnd(0);
    cityEdges[4].setWeight(704);
    cityEdges[5].setStart(4);
    cityEdges[5].setEnd(1);
    cityEdges[5].setWeight(830);
    cityEdges[6].setStart(1);
    cityEdges[6].setEnd(0);
    cityEdges[6].setWeight(518);
    cityEdges[7].setStart(1);
    cityEdges[7].setEnd(2);
    cityEdges[7].setWeight(421);
    int numberOfEdges = sizeof(cityEdges)/sizeof(cityEdges[0]);
    
    Graph<int> cityGraph(cityEdges, numberOfEdges, numberOfVertices);
    //cityGraph.displayAdjacencyList();
    std::cout << std::endl;
    
    
    return 0;
}
