#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int input;
    cin >> input;

    for(int i = input; i > 0; i--){
        for(int j=0; j<input-i;j++)
            cout<<" ";
        for(int k=0; k< i*2-1;k++)
            cout<<"*";
        cout<< "\n";
    }
    return 0;
}