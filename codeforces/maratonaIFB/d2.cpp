#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    int N;
    cin >> N;
    string s;
    priority_queue<pair<int, string>, vector<pair<int,string>>, greater<pair<int, string>>> autor;
    //sort(autor.begin(), autor.end(), greater<pair<int, string>>());
 
    for(int i=0; i<N; i++){
       cin >> s;
       int p;
       cin >> p;
       vector<int> cita;
       int c;
       int h = 0;
       for(int j = 1; j <=p; j++){
           cin >> c;
           if(c)
           cita.push_back(c);
       }
 
       for(int l = p; l >=1; l--){
           int count = 0;
           for(const auto &k: cita){
                if (k >= l){
                    count++;
                   if(count >= l){
                       h = l;
                       break;
                   }
                }
           }
           if(count >= l){
               h = l;
               break;
           }
       }
       autor.push(make_pair(-h, s));
    }
 
    //sort(autor.begin(), autor.end());
 
    while(!autor.empty()){
       auto i = autor.top();
       autor.pop();
 
       cout << i.second << " " << -i.first << "\n";
    }
    
    return 0;
}
