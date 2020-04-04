#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	cin >> n;

	char last;
	for(int s = 0; s < n; s++){	
		string a, b;
		cin >> a >> b;
		if(a.size() < b.size()){
			swap(a, b);
			last = 'a';	
		} else
			last = 'b';

		int u = 0, i = 0;

		while(i < a.size()){
			if(u < b.size()){
				if(last == 'b'){
					cout << a[i++];
					last = 'a';
				}
				else{
					cout << b[u++];
					last = 'b';
				}
			} 	
			else {
				cout << a[i++];
			}
		}if(a.size() == b.size()){
				cout << b[u];
			}	

		cout << endl;
	}
	return 0;
}
