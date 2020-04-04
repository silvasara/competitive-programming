#include <bits/stdc++.h>

using namespace std;

int main(){
    int h, v, f;

    cin >> h >> v >> f;

    if((h + v + f) >= 24)
        cout << h + v + f - 24 << endl;
    
    else if((h + v + f) < 0)
        cout << h + v + f + 24 << endl;

    else
        cout << h + v + f << endl;

    return 0;
}
