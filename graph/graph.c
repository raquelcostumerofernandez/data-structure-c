/*
** EPITECH PROJECT, 2023
** data-structure-c
** File description:
** graph.c
*/
#include <stdio.h>
#include "graph.h"

Graph* createGraph(int numVertices) {
    return NULL;
}
void addEdge(Graph* graph, int src, int dest) {

}
void printGraph(Graph* graph) {

}
void freeGraph(Graph* graph) {
    
}

int main() {
    int numVertices = 4;
    Graph *graph = createGraph(numVertices);

    if (!graph) {
        printf("graph is NULL\n");
        return 84;
    }

    // Add edges to the graph
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 0);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 3);

    // Print the graph
    printf("Graph:\n");
    printGraph(graph);

    // Free the graph
    freeGraph(graph);

    return 0;
}
