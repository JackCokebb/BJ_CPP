#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int input;
    cin >> input;

    for(int i = input; i>0; i--){
        for(int j =0; j<i; j++)
            cout<< "*";
        cout << "\n";
    }
    return 0;
}