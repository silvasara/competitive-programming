#include <bits/stdc++.h>

using namespace std;

int main (){
    char characters[500] = {"`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./"};
    string input;
    int size_c = strlen(characters);

    while(getline(cin, input)){ 
        int size_in = input.length();
        for(int i = 0; i < size_in; i++){
            if(input[i] != ' '){
                for(int j = 0; j < size_c; j++){
                    if(input[i] == characters[j]){
                        input[i] = characters[j-1];
                    }
                }
            }
        }
        
        cout << input << '\n';
    }

    return 0;
}
