#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int input =0;
    cin >> input;

    for(int i =0; i<input;i++){
        for(int k =1; k<input-i;k++){
           cout << " ";
        }
        for(int j=0; j<i+1; j++){
                cout << "*";
            }
            
        cout<<"\n";
    }
}