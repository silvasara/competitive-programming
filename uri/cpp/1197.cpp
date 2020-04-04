#include <bits/stdc++.h>

int main(){
	int v, t, x;

	while(scanf("%d %d", &v, &t) != EOF){
		if((v >= -100 && v <= 100) && (t >= 0 && t<=200))
			x = v * (2 * t);	
			printf("%d\n", x);
	}
	return 0;
}
