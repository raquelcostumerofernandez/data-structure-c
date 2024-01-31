#include <criterion/criterion.h>
#include <criterion/internal/assert.h>
#include <criterion/redirect.h>
#include "../graph.h"

Test(graph, test_createGraph) {
    int numVertices = 5;
    Graph *graph = createGraph(numVertices);
    cr_assert_not_null(graph, "createGraph() should return a non-null pointer");
    cr_assert_not_null(graph->array, "Graph array should be initialized");
    cr_assert_eq(graph->numVertices, numVertices, "Graph should have correct number of vertices");
    freeGraph(graph);
}

Test(graph, test_addEdge) {
    Graph *graph = createGraph(2);
    addEdge(graph, 0, 1);
    cr_assert_not_null(graph->array[0].head, "Edge should be added to the graph");
    cr_assert_eq(graph->array[0].head->dest, 1, "Edge destination should be correct");
    freeGraph(graph);
}

Test(graph, test_printGraph) {
    Graph *graph = createGraph(2);
    addEdge(graph, 0, 1);
    cr_assert_stdout_eq_str("0 -> 1\n", "printGraph() should print the graph");
    freeGraph(graph);
}

Test(graph, test_freeGraph) {
    Graph *graph = createGraph(2);
    addEdge(graph, 0, 1);
    freeGraph(graph);
}
