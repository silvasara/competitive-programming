#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;

    cin >> N;
    float soma;
    vector<float> alimentacao;
    vector<float> geral;
    vector<float> transporte;
    vector<float> despesas;
    float soma_alim = 0.00; 
    float soma_geral = 0.00; 
    float soma_transp = 0.00; 
    float soma_despe = 0.00; 
    while(N--){
        float x;
        string c;

        cin >> x;
        soma+=x;
        cin >> c;

        if(c[0] == 'a'){
            alimentacao.push_back(x);
            soma_alim += x;
        }
        else if(c[0] == 'd'){
            despesas.push_back(x);
            soma_despe += x;
        }
        else if(c[0] == 'g'){
            geral.push_back(x);
            soma_geral += x;
        }
        else{
            transporte.push_back(x);
            soma_transp += x;
        }
    }

    printf("alimentacao %.2f %.2f\n", soma_alim, (soma_alim/soma)*100);
    printf("despesas %.2f %.2f\n", soma_despe, (soma_despe/soma)*100);
    printf("geral %.2f %.2f\n", soma_geral, (soma_geral/soma)*100);
    printf("transporte %.2f %.2f\n", soma_transp, (soma_transp/soma)*100);
    


    return 0;
}
