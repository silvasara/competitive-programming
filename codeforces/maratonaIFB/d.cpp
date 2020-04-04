#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int N;
    cin >> N;
    string s;
    priority_queue<pair<int, string>, vector<pair<int,string>>, greater<pair<int, string>>> autor;
    //vector<pair<int, string>> autor;
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
        int end = p;  
        int start = 0;  
        int mid = 0;
       // while(start < end){
       //     if(p%2){
       //         mid = (end + start)/2;
       //     }
       //     else{
       //         mid = (end + start)/2+1;
       //     }
       //         cout << "mmmmmmmmm" << mid << endl;
       //         cout << "sssssssss" << start << endl;
       //         cout << "eeeeeeeeee" << end << endl;
       //     int count = 0;
       //     for(const auto &k: cita){
       //         if (k >= mid){
       //             count++;
       //         }
       //     }
       //     cout << "count; " << count << endl;
       //     if(count >= mid){
       //         cout << "entrouuuu aqui\n";
       //         start = mid+1;  
       //         h = max(h,mid);
       //     }
       //     else{
       //         end = mid;
       //     }
       //     cout << "\n";
       // }
       // cout << "hhhhhhhh" << h << endl;
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
        //autor.push_back(make_pair(-h, s));
        autor.push(make_pair(-h, s));
    }

   // sort(autor.begin(), autor.end());

   while(!autor.empty()){
       auto i = autor.top();
       autor.pop();

       cout << i.second << " " << -i.first << "\n";
   }
  // for(auto &i:autor){
  //      cout << i.second << " " << -i.first << "\n";
  // }

    return 0;
}

