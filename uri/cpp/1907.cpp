#include <bits/stdc++.h>
#define MAX 1024

using namespace std;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, -1, 1};
char G[MAX][MAX];
int N, M;

bool inGrid(int i, int j){
    if(i < 0 || j < 0 || i >= N || j >= M) return false;

    return G[i][j] == '.'; 
}

void dfs(int i, int j){
    G[i][j] = 'o'; 
    for(int x = 0; x < 4; x++){
        if(inGrid(i + dx[x], j + dy[x]))
                dfs(i + dx[x], j + dy[x]);
    }
}

int main(){

    cin >> N >> M;

    for(int i = 0; i < N; i++)
        scanf("%s", G[i]);

    int ans = 0;

    for(int i = 0; i < M ; i++){
        for(int j = 0; j < M ; j++){
            if(G[i][j] == '.'){
                ans++;
                dfs(i, j);
            }
        }
    }

    cout << ans << endl;

    return 0;
}
