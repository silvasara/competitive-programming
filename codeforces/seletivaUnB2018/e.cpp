#include <bits/stdc++.h>

using namespace std;

char tab[510][510];

int main(int argc, char const *argv[]) {

  int n,m;

  cin >> n;
  cin >> m;

  for (size_t i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> tab[i][j];
    }
  }

  for (int i = 0; i < n; i++){
    for (size_t j = 0; j < m; j++) {

      if(tab[i][j] == 'N'){
        if (tab[i-1][j-1] == 'N' || tab[i-1][j+1] == 'N' || tab[i+1][j-1] == 'N' || tab[i+1][j+1] == 'N') {
          cout << "Reorganize o tabuleiro" << endl;
          return 0;
        }

        if (tab[i][j+1] == 'N' || tab[i][j-1] == 'N') {
          if (tab[i-1][j] == 'N' || tab[i+1][j] == 'N') {
            cout << "Reorganize o tabuleiro" << endl;
            return 0;
          }
        } else if (tab[i-1][j] == 'N' || tab[i+1][j] == 'N'){
          if (tab[i][j-1] == 'N' || tab[i][j+1] == 'N') {
            cout << "Reorganize o tabuleiro" << endl;
            return 0;
          }
        }
      }
    }
  }

  cout << "Comece a partida" << endl;

  // for (size_t i = 0; i < n; i++) {
  //   for (int j = 0; j < m; j++) {
  //     cout << tab[i][j] << ' ';
  //   }
  //   cout << endl;
  // }

  return 0;
}
