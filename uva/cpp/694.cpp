#include <bits/stdc++.h>

using namespace std;

int main(){
    int A, L, i = 1;

    while(cin >> A >> L, A >= 0 and L >= 0){
        int B = A;
        int terms = 0;
            if(A == 1) break;
        //while(terms <= L){
            if(A == 1) break;
            if(A%2){
                A = 3 * A + 1;
                terms++;
            }
            else if(!A%2){
                A = A / 2;
                terms++;
            }
       // }
        printf("Case %d: A = %d, limit = %d, number of terms = %d\n", i++, B, L, terms);
    }


    return 0;
}
