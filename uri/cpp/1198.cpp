#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int a, b;

    while(cin >> a >>b){
        if(b > a)
            cout << b - a << endl;
        else if(a > b)
            cout << a - b << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}
