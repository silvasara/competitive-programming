#include <bits/stdc++.h>
#define MAX_P 101
#define MAX_D 601
#define MAX_ITENS 101

using namespace std;

int T[MAX_ITENS];
int V[MAX_ITENS];

int memo[MAX_P][MAX_D];

int knap(int i, int t){
    if(i < 0 || t <= 0) return 0;

    if(memo[i][t] != -1) return memo[i][t];

    if(T[i] > t) return memo[i][t] = knap(i-1, t);

    return memo[i][t] = max(knap(i, t - T[i]) + V[i],max(knap(i-1, t), knap(i-1, t - T[i]) + V[i]));
}

int main(){
    int n, t;
    int j = 0;

    while(cin >> n >> t, n){
        j++;
        memset(memo, -1, sizeof memo);
        for(int i = 0; i < n; i++){
            cin >> T[i] >> V[i];
        }
        cout << "Instancia " << j << endl;
        cout << knap(n-1, t) << endl;
        cout << endl;
    }

    return 0;
}
