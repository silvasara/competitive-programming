#include <bits/stdc++.h>
#include <vector>

using namespace std;

//using ld = long int;

int main(){
	string n;

	cin >> n;
	
	if(n.length() < 11 && n[0] != '-')
		for(int i = n.length() - 1; i >=0; i--){
			cout << n[i];
		}

	cout << endl;
	
	return 0;
	
}
