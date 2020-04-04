#include <bits/stdc++.h>

using namespace std;

bool visited[26];
bool vis[26];

void dfs(int v, vector<int>* g) {
    visited[v] = true;
    vis[v] = true;
    for(auto i: g[v]){
        if (!visited[i])
            dfs(i, g);
    }
}

int main() {
    int N, V, E;
    int cont = 0, c = 1;
    int x2, y2;
    char x1, y1, aux;
    cin >> N;
    cin.clear();
    cin.ignore(INT_MAX, '\n');

    while(N--) {
        cin >> V >> E;
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        memset(visited, false, sizeof visited);
        vector<int> grafo[26];
        while (E--){
            cin >> x1 >> y1;
            x2 = (int)x1 - 97;
            y2 = (int)y1 - 97;
            grafo[x2].push_back(y2);
            grafo[y2].push_back(x2);
        }
        cont = 0;
        cout << "Case #" << c << ":" << endl;
        for (int i = 0; i < V; i++) {
            if (visited[i] != true){
                memset(vis, false, sizeof vis);
                dfs(i, grafo);
                for (int j=0; j < 26; j++){
                    if(vis[j] == true)
                        cout << char(j+97) << ",";
                }
                cout << endl;
                cont++;
            }
        }
        c++;
        cout << cont << " connected components" << endl;
        cout << endl;
    }
}
