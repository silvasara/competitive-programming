#include <bits/stdc++.h>

using namespace std;

queue <pair<int, int>> fila;
int dx[] = {1, 1, -1, -1, 2, 2, -2, -2};
int dy[] = {2, -2, 2, -2, 1, -1, 1, -1};
char pos1[3], pos2[3];
int matriz [8][8];
int a, b, c, d;


void dfs(int npx, int npy, int m[8][8]) {
    fila.push(make_pair(npx, npy));

    while (!fila.empty()) {
        auto f = fila.front();
        npx = f.first;
        npy = f.second;

        if (npx == c && npy == d) {
            printf("To get from %c%d to %c%d takes %d knight moves.\n", pos1[0], b, pos2[0], d, m[npx][npy]); 
            return;
        }

        fila.pop();

        for (int i = 0; i < 8; i++) {
            if (!(npx+dx[i] < 0) && !(npy+dy[i] < 0) && !(npx+dx[i] >= 8) && !(npy+dy[i] >= 8)) {
                fila.push(make_pair(npx+dx[i], npy+dy[i]));
                m[npx+dx[i]][npy+dy[i]] = m[npx][npy] + 1;
                if (npx+dx[i] == c && npy+dy[i] == d) {
                    printf("To get from %c%d to %c%d takes %d knight moves.\n", pos1[0], b, pos2[0], d, m[npx+dx[i]][npy+dy[i]]); 
                    return;
                }
            }
        }
    }
}

int main() {
    while(cin >> pos1 >> pos2){
        a = pos1[0] - 'a';
        b = pos1[1] - '0';
        c = pos2[0] - 'a';
        d = pos2[1] - '0';
        memset(matriz, 0, sizeof matriz);
        dfs(a, b, matriz);
    }

    return 0;
}
