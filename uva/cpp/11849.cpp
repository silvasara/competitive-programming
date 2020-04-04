#include <bits/stdc++.h>

using namespace std;

int main(){
	int M, N, c, i, number;
	set<int> CDs;

	while(cin >> M >> N, M || N){
		number = 0;
		number = M + N;
		for(i = 0; i < number; i++){
			cin >> c;
			CDs.insert(c);
		}
		cout << number - CDs.size() << '\n';
		
		CDs.clear();
	}

	return 0;
}
