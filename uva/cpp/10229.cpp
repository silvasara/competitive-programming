 #include <bits/stdc++.h>
 
 using namespace std;
 
 int fib(int n){
     if(n < 2)
         return n;
     return fib(n-1) + fib(n-2);
 }
 
 int main(){
     int x, n;
     
     while(cin >> x >> n){
         int M = (1 << n);
         printf("%d\n", fib(x) % M);
   }
 
     return 0;
 }

