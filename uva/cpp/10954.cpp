#include<bits/stdc++.h>
#define debug(x) std::cout << #x " = " << x << std::endl;
using namespace std;
using lli = long long int;

int main() {
	ios::sync_with_stdio(0);

  int N, temp;
  while(cin >> N, N) {

    priority_queue<lli> min_heap;  
  
    for(int i = 0; i < N; i++) { cin >> temp; min_heap.push(-temp); }

    lli acc = 0, sum = 0;
    while(min_heap.size() > 1) {
      auto a = abs(min_heap.top()); min_heap.pop();
      auto b = abs(min_heap.top()); min_heap.pop();
      sum = a + b; acc += sum;
      min_heap.push(-sum);
    }
  
    cout << acc << endl;
  }

	return 0;
}
