#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    int n_spaces;
    int n_asteristics;

    while(cin >> N){
        n_spaces = N/2;
        n_asteristics = 1;

        while(n_asteristics <= N){
            for(int i = 0; i < n_spaces; i++){
                cout << ' ';
            }
            for(int i = 0; i < n_asteristics; i++){
                cout << '*';
            }

            cout << endl;
            n_asteristics+=2;
            n_spaces--;
        }
       
        n_spaces = N/2;
        for(int i = 0; i < n_spaces; i++)
            cout << ' ';
        cout << "*\n";
       
        n_spaces--;

        for(int i = 0; i < n_spaces; i++)
            cout << ' ';
        cout << "***\n\n";
    }

    return 0;
}
