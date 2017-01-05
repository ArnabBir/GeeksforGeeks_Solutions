#include <bits/stdc++.h>
using namespace std;
#define MAX 100
bool isBipartite(int g[MAX][MAX],int v);

int main() {
	int t;
	cin>>t;
	int g[MAX][MAX];
	while(t--)
	{
		memset(g,0,sizeof g);
		int n;
		cin>>n;
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>g[i][j];
			}
		}
		
		cout<<isBipartite(g,n)<<endl;
	}
	return 0;
}

enum {w = -1, r = 0, b = 1};

bool isBipartite(int g[MAX][MAX], int v)
{
    int src;
    vector<int> color(v, w);
    color[0] = r;
    queue<int> q;
    q.push(0);
    
    while(!q.empty()){
        src = q.front();
        q.pop();
        for(int i = 0; i < v; ++i){
            if(g[src][i] == 1 && color[i] == w){
                color[i] = 1 - color[src];
                q.push(i);
            }
            else if(g[src][i] == 1 && color[i] == color[src]){
                return false;
        
            }
        }
    }
    return true;
}
