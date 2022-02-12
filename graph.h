#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <iostream>

template<typename V>
class graph {
    private:
        int counter {};
        std::vector<V> vertices;
    public:
        void addVertex(V vertex) {
            vertices.push_back(vertex);
        }
        V getVertex(int position) {
            return vertices.at(position);
        }
        std::vector<V> getVertices() {
            return vertices;
        }
};


#endif //APP1_GRAPH_H
