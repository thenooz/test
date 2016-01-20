#include<iostream>
#define V 9
#define INF 9999
using namespace std;
int graph[V][V] = {{0, 4, 0, 0, 0, 0, 0, 8, 0},
                      {4, 0, 8, 0, 0, 0, 0, 11, 0},
                      {0, 8, 0, 7, 0, 4, 0, 0, 2},
                      {0, 0, 7, 0, 9, 14, 0, 0, 0},
                      {0, 0, 0, 9, 0, 10, 0, 0, 0},
                      {0, 0, 4, 0, 10, 0, 2, 0, 0},
                      {0, 0, 0, 14, 0, 2, 0, 1, 6},
                      {8, 11, 0, 0, 0, 0, 1, 0, 7},
                      {0, 0, 2, 0, 0, 0, 6, 7, 0}
                     };
bool set[V];
int dist[V]={0,INF,INF,INF,INF,INF,INF,INF,INF};

void dijkstra();
int getmin();
int main()
{
    for(int i=0;i<V;i++)
    {
    	for(int j=0;j<V;j++)
    	{
    		graph[i][j]=(graph[i][j]==0?INF:graph[i][j]);
    	}
    	//graph[0][0]=0;
    	//dist[i]=graph[0][i];
    }
    int k=0;
    
    //Dijkstra for all possible paths with O(n^3)
    /*for(int i=0;i<V;i++)
    {
    	for(int k=0;k<V;k++)
    	for(int j=0;j<V;j++)
    	{
    		if(graph[k][j]>graph[k][i]+graph[i][j])
    		graph[k][j]=graph[k][i]+graph[i][j];
    	}
    }*/
    
    dijkstra();
    
    for(int i=0;i<V;i++)
    cout<<dist[i]<<endl;
	return 0;
}
void dijkstra() //Distance from source with O(n^2)
{
	for(int i=0;i<V-1;i++)
	{
		int u=getmin();       // Get the vertex with minimum destance that has not been included to the tree yet
		set[u]=true;
		for(int j=0;j<V;j++)
		{															//change the distances of all vertex connected to u that have not been included
			if(set[j]==false&&dist[u]!=INF&&dist[j]>dist[u]+graph[u][j])  // if the distance through u is smaller
			dist[j]=dist[u]+graph[u][j];
		}	
	}
}
int getmin()
{
	int min=INF,r;
	for(int i=0;i<V;i++)
	{
		if(set[i]==false&&min>=dist[i])     //Find a vertex that has the smallest distance and has not been included yet
		{
			min=dist[i];
			r=i;
		}
	}
	return r;
}
