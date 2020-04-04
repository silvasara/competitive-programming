#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, h1, h2, m1, m2, s1, s2, c, sT, hF, mF, sF;

    cin >> x;

    scanf("%d:%d:%d", &h1, &m1, &s1);
    scanf("%d:%d:%d", &h2, &m2, &s2);

    if((h2 - h1) < 0)   
        hF = (h2 - h1) + 24;
    else
        hF = h2 - h1;

    if((m2 - m1) < 0){   
        mF = (m2 - m1) + 60; 
        hF--;
    }

    else
        mF = m2 - m1;

        
    if((s2 - s1) < 0){
        sF = (s2 - s1) + 60; 
        if(mF == 0 && hF != 0)
            hF--;
        if(mF != 0)
            mF--;
    }

    else
        sF = s2 - s1;

    sT = sF + (mF * 60) + (hF * 3600); 

    if(sT == 0)
        sT = 86400;

    c = sT / x;

    //cout << sF << mF << hF << '\n';
    cout << c << '\n';

    return 0;
}
