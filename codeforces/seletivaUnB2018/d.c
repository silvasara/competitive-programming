#include <stdio.h>
#include <stdlib.h>

unsigned int N, K;

int a[100010];

int main() {
    register unsigned int i, j = 0; 
    
    scanf("%d %d", &N, &K);
    

    for(i = 1; i <= N; i++){
        scanf("%d", &a[i]);
    }
    
    i = 1;
    while(i <= N){
        j = i+1;
        while(j <= N){
            if(abs(a[j] - a[i]) == K){
                if(a[j] >= a[i])
                    printf("Sim\n%d %d\n", j, i);
                    //cout << "Sim" << '\n' << j << ' ' << i << '\n';
                else if(a[j] < a[i])
                    printf("Sim\n%d %d\n", i, j);
                    //cout << "Sim" << '\n' << i << ' ' << j << '\n';

                return 0;
            }
            j++;
        }
        i++;
    }

    printf("Nao\n");

    return 0;
}
