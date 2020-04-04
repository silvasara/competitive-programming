#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string natal;

	cin >> n;

	if(n > 1 && n <= pow(10, 9)){
		string natal(n, 'a');
		cout << "Feliz nat" << natal << "l!" << "\n";
	}
	else{
		cin >> n;
		}
	
	return 0;	
}
