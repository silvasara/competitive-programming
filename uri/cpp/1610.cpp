#include <bits/stdc++.h>

using namespace std;

bool Ciclico(int v, vector <int>* g, bool visited[], bool aux[]) { 
    if(visited[v] == false) {
        // Mark the current node as visited and part of recursion stack 
        visited[v] = true;
        aux[v] = true;
  
        // Recur for all the vertices adjacent to this vertex
        for(auto i: g[v]) { 
            if ( !visited[i] && Ciclico(i, g, visited, aux) ) 
                return true; 
            else if (aux[i]) 
                return true;
        }
  
    }
    aux[v] = false;  // remove the vertex from recursion stack 
    return false; 
}

int main() {
    int N, V, E;
    int x1, y1;
    bool flag;
    bool visited[10001];
    bool aux[10001];
    cin >> N;

    while(N--) {
        cin >> V >> E;
        flag = false;    
        memset(visited, false, sizeof visited);
        memset(aux, false, sizeof aux);
        vector<int> grafo[10001];
        while (E--){
            cin >> x1 >> y1;
            grafo[x1].push_back(y1);
        }
        
        for (int i = 0; i < V; i++) {
            if (visited[i] != true){
                if (Ciclico(i, grafo, visited, aux)) flag = true;

            }
        }
        
        if (flag) cout << "SIM" << endl;

        else cout << "NAO" << endl;

    }

    return 0;
}
