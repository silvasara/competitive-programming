#include <bits/stdc++.h>

using namespace std;
 
vector<int> fence;
 
int solve(int l, int r, int h){
    if (l > r) return 0;
 
    int min_idx = min_element(fence.begin() + l, fence.begin() + r + 1) - fence.begin();
 
    int strokes_local  = fence[min_idx] - h;
    int strokes_l = solve(l, min_idx-1, fence[min_idx]);
    int strokes_r = solve(min_idx+1, r, fence[min_idx]);
    int strokes = strokes_local + strokes_r + strokes_l;
 
    int vertical_strokes = r - l + 1;
 
    return min(vertical_strokes, strokes);
}
 
int main(){
    ios_base::sync_with_stdio(false);
    int n; cin >> n;
 
    fence = vector<int>(n+1);
    for(int q = 1; q <= n; ++q)
        cin >> fence[q];
 
    cout <<  solve(1, n, 0) << endl;
 
    return 0;
}
