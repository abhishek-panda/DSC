#ifndef VERTEX_H
#define VERTEX_H

#include <vector>

template<typename T>
class vertex {
    private:
        T data;
        std::vector<vertex> adjacentVertex;
    public:
        vertex() {};
        vertex(T i) {
            data = i;
        }
        void addEgde(vertex v) {
            adjacentVertex.push_back(v);
        }
        std::vector<vertex> getEdges() {
            return adjacentVertex;
        }
        T getData() {
            return data;
        }
        bool operator==(const vertex & rhs) const {
            return data == rhs.data;
        }

};


#endif //APP1_VERTEX_H
