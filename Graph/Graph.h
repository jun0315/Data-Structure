//
// Created by lenovo on 2019/5/15.
//

#ifndef GRAPH_GRAPH_H
#define GRAPH_GRAPH_H
#define MAXSIZE 10

class Graph {
public:
    Graph();
    ~Graph();
    void InsertVertex(char v);//插入定点V
    void InsertEdge(char v1,char v2);//插入一条由点v1和v2组成的边
    int GetEdgeNum(char v);//获取该点的边数
    void DeleteEdge(char v1,char v2);//删除两点之间的边

private:
    int NumVertex;
    int NumEdge;
    char *Vertex;
    int **Edge;
    int
};


#endif //GRAPH_GRAPH_H
