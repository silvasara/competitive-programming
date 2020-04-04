#include <bits/stdc++.h>

using namespace std;

int cont = 0;

int fib(int n){
    cont++;
    if(n == 0 || n == 1)
        return n;
    else
        return fib(n-1) + fib(n-2);
}

int main(){
    int x, n;
    
    cin >> x;
    while(x--){
        cin >> n;
        printf("fib(%d) = %d calls = %d\n", n, cont-1, fib(n));
        cont = 0;
    }

    return 0;
}
