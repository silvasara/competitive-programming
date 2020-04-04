#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin >> n;

    while(n--){
        int l;
        cin >> l;
        vector<int> wagons;
        int perm = 0;
        int flag;
        while(l--){
            int w;
            cin >> w;
            wagons.push_back(w);
        }
        do{
            flag = 0;
            for(int i = 0; i < wagons.size() - 1; i++){
                if(wagons[i] > wagons[i+1]){
                    swap(wagons[i], wagons[i+1]);
                    perm++;
                    flag = 1;
                }
            }
        } while(flag == 1);
        cout << "Optimal train swapping takes " << perm << " swaps." << endl;
    }

    return 0;
}
