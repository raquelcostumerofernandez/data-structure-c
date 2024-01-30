/*
** EPITECH PROJECT, 2024
** data-structure-c
** File description:
** graph
*/

#ifndef GRAPH_H_
#define GRAPH_H_

typedef struct AdjListNode {
    int dest;
    struct AdjListNode* next;
} AdjListNode;

// A structure to represent an adjacency list
typedef struct AdjList {
    struct AdjListNode* head;
} AdjList;

// A structure to represent a graph. A graph is an array of adjacency lists.
// The size of the array will be the number of vertices in the graph.
typedef struct Graph {
    int numVertices;
    struct AdjList* array;
} Graph;

// Function declarations
Graph* createGraph(int numVertices);
void addEdge(Graph* graph, int src, int dest);
void printGraph(Graph* graph);
void freeGraph(Graph* graph);


#endif /* !GRAPH_H_ */
