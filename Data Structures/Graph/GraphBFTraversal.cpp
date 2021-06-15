#include <iostream>
#include <stdio.h>
using namespace std;

struct node
{
    char name;
    int edge_count;
    char *adj;
};

struct node *create_vertices(int n)
{
    struct node *vertices = new struct node[n];
    cout << "!!name of vertex should be single character..." << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter name of vertex " << i + 1 << ":" << endl;
        cin >> vertices[i].name;
    }
    return vertices;
}

void input_graph(struct node *vertices,int n){
    for (int i = 0; i < n; i++)
    {
        cout << "How many vertices are connected to " << vertices[i].name;
        cin >> vertices[i].edge_count;
        vertices[i].adj = new char[vertices[i].edge_count];
        for (int j = 0; j < vertices[i].edge_count; j++)
        {
            cout << "Enter their names:" << endl;
            cin >> vertices[i].adj[j];
        }
    }
}

void display_graph(struct node *vertices,int n){
    for (int i = 0; i < n; i++)
    {
        cout << "node " << vertices[i].name << " is connected with ";
        for (int j = 0; j < vertices[i].edge_count; j++)
        {
            cout << vertices[i].adj[j] << " ";
        }
        cout << endl;
    }
}


int main()
{
    int n = 0;
    cout << "Enter number of vertices:" << endl;
    cin >> n;

    struct node *vertices = create_vertices(n);

    input_graph(vertices,n);

    display_graph(vertices,n);

    return 0;
}