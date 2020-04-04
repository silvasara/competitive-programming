#include <bits/stdc++.h>

using namespace std;


vector<int> A;
vector<int> B;
vector<int> C;
vector<int> achados;

int main(int argc, char const *argv[]) {

  int n,m,o,i,e;
  cin >> n >> m >> o;
  for(i=0; i<n;i++){
    cin >> e;
    A.push_back(e);
  }
  for(i=0; i<m;i++){
    cin >> e;
    B.push_back(e);
  }
  for(i=0; i < o;i++){
    cin >> e;
    C.push_back(e);
  }
  int j = 0, var = 0;

  if (A.size() < B.size() && A.size() < C.size() ) {
    sort(B.begin(),B.end());
    sort(C.begin(),C.end());

    for (size_t i = 0; i < A.size(); i++) {
      if(binary_search(B.begin(),B.end(),A[i]) == true && binary_search(C.begin(),C.end(),A[i]) == true){
        achados.push_back(A[i]);
      }
    }
  } else if (B.size() < A.size() && B.size() < C.size()) {
    sort(A.begin(),A.end());
    sort(C.begin(),C.end());

    for (size_t i = 0; i < B.size(); i++) {
      if(binary_search(A.begin(),A.end(),B[i]) == true && binary_search(C.begin(),C.end(),B[i]) == true){
        achados.push_back(B[i]);

      }
    }
  } else {
    sort(B.begin(),B.end());
    sort(A.begin(),A.end());

    for (size_t i = 0; i < C.size(); i++) {
      if(binary_search(B.begin(),B.end(),C[i]) == true && binary_search(A.begin(),A.end(),C[i]) == true){
        // cout << " " << C[i];
        achados.push_back(C[i]);

      }
    }

  }
  sort(achados.begin(),achados.end());
  cout << achados[0];
  for (size_t i = 1; i < achados.size(); i++) {
    cout << " " << achados[i];
  }
  cout << endl;


  return 0;
}
