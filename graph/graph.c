#include<stdio.h>
#include<stdlib.h>

// makeing a AdjListNOde struct
struct adjListNode
{
    int dest;
    struct adjListNode * next;
};
// making a head node of of the adjListNode

struct  adjList
{
    struct adjListNode * head;
};

//makeing a struct for graph 

struct  Graph
{
    int V;
    struct  adjList *array;
};

//makeing a function to make new adj LIST node

struct adjListNode * newAdjListNode(int dest){
    struct adjListNode *newNode = (struct adjListNode*)malloc(sizeof(struct adjListNode));

    // set the dest to given dest and next = null

    newNode->dest = dest;
    newNode->next = NULL;
    return newNode;
}

// making a function to make the graph to initalize the graph

struct Graph * newGraph(int V){
    struct Graph *newGraph = (struct Graph*)malloc(sizeof(struct Graph));

    //allocatig the memory for graph's members
        
    newGraph->V = V;
    newGraph->array = (struct adjList*)calloc(V,sizeof(struct adjList));

    for(int i  = 0;i<V;i++){
        newGraph->array[i].head = NULL;
    }
    return newGraph;
}

// making a function to add new Edges to the graph

void addEdge(struct Graph* graph, int src, int dest){
    //adding the edge from souce to dest
    //check is for temp use
    struct adjListNode *check = NULL;
    struct adjListNode *newNode = newAdjListNode(dest);

    if(graph->array[src].head == NULL){
        newNode->next = graph->array[src].head;
        graph->array[src].head = newNode;
    }else{
        check = graph->array[src].head;
        while (check->next)
        {
            check = check->next;
        }
        check->next = newNode;
    }
    //Since it is a undirected graph we now need to add vertex from  dest to souce 
    newNode = newAdjListNode(src);
    if(graph->array[dest].head == NULL){
        newNode->next = graph->array[dest].head;
        graph->array[dest].head = newNode;
    }else{
        check = graph->array[dest].head;
        while (check->next)
        {
            check = check->next;
        }
        check->next = newNode;
    }
}

void printGraph(struct Graph* graph){
    for(int i =0;i<graph->V;++i){
        struct adjListNode *pCrawl = graph->array[i].head;
    printf("%d -> ",i);
    while (pCrawl)
    {
        printf("%d -> ",pCrawl->dest);
        pCrawl = pCrawl->next;
    }
    printf("\n");
    }
}

int main()
{
    // create the graph given in above figure
    int V = 7;
    struct Graph* graph = newGraph(V);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);
 
    // print the adjacency list representation of the above
    // graph
    printGraph(graph);
 
    return 0;
}

