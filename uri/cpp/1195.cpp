#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, x;
    vector<int>arvore;

    cin >> n;

    while(n--){
        cin >> m;
        while(m--){
           cin >> x;
           arvore.push_back(x);
        }
        sort(arvore.begin(), arvore.end());
        for(auto i: arvore)
            cout << i << " ";
        auto a =  arvore.size();

        cout << arvore[a/2] << " ";
        for(auto i: arvore){
            if(i != arvore[a/2])
                cout << i << " ";
        }
//    auto it = arvore.begin();
//        for(auto i: arvore){
//            if(i = it)
//                cout << i << " ";
//        }
// cout << *it << endl; 
//   cout << *(it) + 1 << endl;
//    cout << *it << endl;
//
//    auto it2 = arvore.begin();
//    cout << *it + 3 << endl;
//
//    }
//    
}
        return 0;
}
