#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,k,s,y,total=0;
    int table[6][2]={};
    cin >> n >> k;
    while(n--){
        cin >> s >>y;
        table[y-1][s]++;
    }
    for(int i =0; i < 6; i++){
        for(int j = 0; j<2;j++){
            total += table[i][j]/k;
            if(table[i][j]%k != 0)
                total++;
        }
    }
    cout << total;

    return 0;
}