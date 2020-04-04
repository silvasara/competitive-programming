#include <bits/stdc++.h>

using namespace std;

int main(){
	int H, P;
	double average;


	while( cin >> H >> P, H < 1 || P > 1000);

	average =(double)H / (double)P;
	
	printf("%.2lf\n", average);

	return 0;
}

