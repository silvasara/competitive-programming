#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, number;
    vector<int> impar;
    vector<int> par;

    cin >> n;
    
    while(n--){
       cin >> number;

       if(number % 2)
        impar.push_back(number);    
       else
        par.push_back(number);
    }
    sort(par.begin(), par.end());
    for(auto x: par)
        cout << x << endl;

    sort(impar.begin(), impar.end());
    reverse(impar.begin(), impar.end());
    for(auto x: impar)
        cout << x << endl;

    return 0;
}
