#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int testCase =0;
    int x,y;
    cin >> testCase;
    for(int i = 0 ; i<testCase; i++){
        cin >> x >>y;
        cout << x+y<<"\n";
    }
    return 0;
}