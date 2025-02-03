#include <stdio.h>
#include <stdlib.h>

#define V 5
#define E 7

typedef struct {
    int src, dest, weight;
} Edge;

int parent[V];

int find(int i) {
    while (parent[i] != i)
        i = parent[i];
    return i;
}

void unionSets(int i, int j) {
    int a = find(i);
    int b = find(j);
    parent[a] = b;
}

int compare(const void* a, const void* b) {
    Edge* a1 = (Edge*)a;
    Edge* b1 = (Edge*)b;
    return a1->weight > b1->weight;
}

void kruskalMST(Edge edges[]) {
    qsort(edges, E, sizeof(edges[0]), compare);

    for (int i = 0; i < V; i++)
        parent[i] = i;

    int e = 0;
    int i = 0;

    while (e < V - 1 && i < E) {
        Edge next_edge = edges[i++];

        int x = find(next_edge.src);
        int y = find(next_edge.dest);

        if (x != y) {
            printf("%d - %d \t%d\n", next_edge.src, next_edge.dest, next_edge.weight);
            unionSets(x, y);
            e++;
        }
    }
}

int main() {
    Edge edges[E] = {
        {0, 1, 2},
        {0, 3, 6},
        {1, 2, 3},
        {1, 3, 8},
        {1, 4, 5},
        {2, 4, 7},
        {3, 4, 9}
    };

    kruskalMST(edges);

    return 0;
}