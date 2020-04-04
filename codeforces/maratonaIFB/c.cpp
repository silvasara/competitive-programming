#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    int n, k, input;

    //scanf("%d %d", &n,&k);
    cin >> n >> k;
    set <int> arvores;
    set <int, greater <int>> :: iterator itr;
    arvores.insert(0);
    arvores.insert(k+1);
    for(int i = 0; i < n; i++) {
        cin >> input;
        arvores.insert(input);
    }


    set <int, greater <int>> :: iterator last = arvores.begin();	
    int trechos = 0;
    for(itr = ++arvores.begin(); itr != arvores.end(); ++itr) {
        if((*itr - *last) > 1) {
            trechos++;
        }
        last++;
    }

    cout << trechos << endl;
    return 0;
}
