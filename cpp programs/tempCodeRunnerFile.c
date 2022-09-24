#include <stdlib.h>
#include <stdio.h>
typedef struct node
{
    struct node *next;
    int vertex;
} node;

node *G[20];
int visited[20];
int n = 7;
void read_graph();
void addEdge(int, int);
void DFS(int);
void DFS(int i)
{
    node *p;
    printf("%d->", i);
    p = G[i];
    visited[i] = 1;
    while (p != NULL)
    {
        i = p->vertex;
        if (!visited[i])
        {
            DFS(i);
        }
        p = p->next;
    }
}
void addEdge(int vi, int vj)
{
    node *p, *q;
    q = (node *)malloc(sizeof(node));
    q->vertex = vj;
    q->next = NULL;
    if (G[vi] == NULL)
    G[vi] = q;
    else
    {
        p = G[vi];
        while (p->next != NULL)
        p = p->next;
        p->next = q;
    }
}
void main()
{
    int i;
    addEdge(0, 1);
    addEdge(0, 3);
    addEdge(0, 2);
    addEdge(1, 4);
    addEdge(1, 2);
    addEdge(4, 0);
    addEdge(2, 4);
    addEdge(7, 2);
    addEdge(6, 7);
    addEdge(6, 5);
    addEdge(6, 3);
    addEdge(3, 5);
    addEdge(3, 2);
    addEdge(5, 2);
    for (i = 0; i < n; i++)
    {
        visited[i] = 0;
    }
    DFS(6);
}