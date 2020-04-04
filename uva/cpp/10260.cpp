#include <bits/stdc++.h>

using namespace std;

int main(){
    string in;

    while(cin >> in){
       for(int i = 0; i < in.size(); i++){
            if(in[i] == 'B' or in[i] == 'F' or in[i] == 'P' or in[i] == 'V'){
                if(in[i-1] != 'B' and in[i-1] != 'F' and in[i-1] != 'P' and in[i-1] != 'V')
                    cout << 1;
            }
            else if(in[i] == 'C' or in[i] == 'G' or in[i] == 'J' or in[i] == 'K' or in[i] == 'Q' or in[i] == 'S' or in[i] == 'X' or in[i] == 'Z'){
                if(in[i-1] != 'C' and in[i-1] != 'G' and in[i-1] != 'J' and in[i-1] != 'K' and in[i-1] != 'Q' and in[i-1] != 'S' and in[i-1] != 'X' and in[i-1] != 'Z')

                    cout << 2;
            }
            else if(in[i] == 'D' or in[i] == 'T'){
                if(in[i-1] != 'D' and in[i-1] != 'T')
                    cout << 3;
            }
            else if(in[i] == 'L'){
                if(in[i-1] != 'L')
                    cout << 4;
            }
            else if(in[i] == 'M' or in[i] == 'N'){
                if(in[i-1] != 'M' and in[i-1] != 'N')
                    cout << 5;
            }
            else if(in[i] == 'R'){
                if(in[i-1] != 'R')
                    cout << 6;
            }
       }
     
     cout << endl;
    }

    return 0;
}
