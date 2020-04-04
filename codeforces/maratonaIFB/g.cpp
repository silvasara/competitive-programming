#include<bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    set<int> biscoitos;  
    
    for(int i=1; i<=N;i++){
       int a;
       cin >> a;
       biscoitos.insert(a);
    }

    for(int i=0; i<=N; i++){
       if(!binary_search(biscoitos.begin(), biscoitos.end(), i)){
           cout << i << "\n"; 
           break;
       }
    }
    
    return 0;
}

