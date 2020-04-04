#include <bits/stdc++.h>

using namespace std;

void binet(int n){
	double fibonacci;
	fibonacci = (pow(1 + sqrt(5), n)- pow(1 - sqrt(5),n)) / (pow(2.0, n)*sqrt(5));
	printf("%.1lf\n", fibonacci);
}

int main(){
	int number;

	cin >> number;

	if(number > 0 && number <= 50){
		binet(number);
	}
	else
		cin >> number;
	
	return 0;
}
