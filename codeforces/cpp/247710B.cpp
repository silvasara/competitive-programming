#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	int n = 0;
 
	cin >> n;
	priority_queue<int, vector<int>, greater<int>> b;
	queue<int> d;
	int countv = 0;

	while(n--){
		char a;
		cin >> a;
		if(a == '+'){
			int c;
			cin >> c;
			b.push(c);
		}
		else if(a == '?' && b.empty()){
			cout << -1 << "\n";
		}
		else{
				cout << b.top() << "\n";
				b.pop();
		}
	}
 
	return 0;
}
