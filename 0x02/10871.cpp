#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int len, crit;

    cin >>len >> crit;

    int numArr[len];
    for(int i =0; i < len; i++){
        cin >> numArr[i];
    }
    for(int i : numArr){
        if(i<crit){
            cout << i << " ";        
        }
    }
}