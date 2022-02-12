#include <iostream>
#include "vertex.h"
#include "graph.h"
#include <queue>
#include <algorithm>

using namespace std;

void BFS(graph<vertex<int>> grp, vertex<int> start) {

    queue<vertex<int>> bfsPool;
    vector<vertex<int>> visited;

    bfsPool.push(start);

    while (!bfsPool.empty())
    {
        auto vertex = bfsPool.front();
        cout << vertex.getData() << endl;
        visited.push_back(vertex);

        for (auto adjVertex: vertex.getEdges()) {
            if (std::count(visited.begin(), visited.end(), adjVertex) == 0) {

                 bfsPool.push(adjVertex);
            }
        }
        bfsPool.pop();
    }
}


int main() {
    graph<vertex<int>> grp;

    vertex<int> v1 {1};
    vertex<int> v2 {2};
    vertex<int> v3 {3};
    vertex<int> v4 {4};
    vertex<int> v5 {5};
    vertex<int> v6 {6};

    grp.addVertex(v1);
    grp.addVertex(v1);
    grp.addVertex(v2);
    grp.addVertex(v3);
    grp.addVertex(v4);
    grp.addVertex(v5);
    grp.addVertex(v6);


    v1.addEgde(v2);
    v1.addEgde(v3);

    v2.addEgde(v1);
    v2.addEgde(v4);
    v2.addEgde(v5);

    v3.addEgde(v1);
    v3.addEgde(v5);

    v4.addEgde(v2);
    v4.addEgde(v5);
    v4.addEgde(v6);

    v5.addEgde(v3);
    v5.addEgde(v2);
    v5.addEgde(v4);

    v6.addEgde(v4);
    v6.addEgde(v5);

    BFS(grp, v1);

}