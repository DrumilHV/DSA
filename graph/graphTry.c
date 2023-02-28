//Directed and undirected graph in c 

#include<stdio.h>
#include<stdlib.h>

//making a structure to store the adjList's components
struct adjListNode{
    int dest;
    struct adjListNode *next;
};

//making a struct to hold the previous structure

struct adjList
{
    struct adjListNode * head;
};

//making a graph structure to hold and make a graph

struct Graph
{
    //this will hold the number of verices
    int V;
    //this array will hold the array of adjList
    struct adjList * array;
};

// making a fn to crate graph

struct Graph * createGraph(int V){
    struct Graph * newGraph = (struct Graph*) malloc(sizeof(struct Graph));

    newGraph->V = V;
    //allocating memory to the array to hold the list
    newGraph->array = (struct adjList*) calloc(V,sizeof(struct Graph));

    //assigiging null to all the Lists for initialization

    for (int i = 0;i<V;++i){
        newGraph->array[i].head = NULL;
    }

    return newGraph;
}

struct adjListNode * newAdjListNode(int dest){
    struct adjListNode *newListNode = (struct adjListNode *) malloc(sizeof(struct adjListNode));

    newListNode->dest = dest;
    //assignign null to next
    newListNode->next = NULL;
    return newListNode;
}

//making a function to add an EDGE
void addEdge(struct Graph* graph, int src, int dest){
    struct adjListNode * check = NULL;
    struct adjListNode * newNode = newAdjListNode(dest);
    
    //checking if the adjListNode is null then make it the frist node
    // by refering the next node to itself
    //this is the linked list concenpts to check if first node exists
    //if not then make the newNode as frist node and make it refer itself
    if(graph->array[src].head == NULL){
        newNode->next = graph->array[src].head;
        graph->array[src].head = newNode;
    }//if yes then add this new node to the end of the existing list
    else{
        //linked list concept
        check = graph->array[src].head;
        while (check->next)
        {
            check = check->next;
        }
        check->next = newNode;
        
    }

    //now for undirected graph we need to add 
    //vertex from dest to source
    //If we comment the following code from here till the end of this fun 
    //it becomes a directed graph
    //===============================================>
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
    //<==================================================
}

void showGraph(struct Graph *graph){
    for(int i=0;i<graph->V;i++){
        //linked list traversal techinque
        //make temp var and keep traversing
    struct adjListNode * pCrawl = graph->array[i].head;
    printf("%d -> ", i);
    while(pCrawl){
        printf("%d -> ", pCrawl->dest);
        pCrawl = pCrawl->next;
    }
    printf("\n");
    }
}

int main(){
    int V = 7;
    struct Graph *graph = createGraph(V);
    addEdge(graph,0,1);
    addEdge(graph,0,2);
    addEdge(graph,1,3);
    addEdge(graph,2,1);
    addEdge(graph,3,5);
    addEdge(graph,4,1);
    addEdge(graph,5,4);

    showGraph(graph);

    return 0;
}

