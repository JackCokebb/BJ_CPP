#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int input;
    cin >> input;

    // int bottom,numStar,numBlank;
    // bottom = input * 2 - 1;

    // for(int i = 1; i< input+1; i++){
    //     numStar = i*2 -1;
    //     numBlank = bottom - numStar;
    //     for(int j = 0; j< numBlank/2; j++)
    //         cout<< " ";
    //     for(int k = 0; k<numStar; k++)
    //         cout<<"*";
    //     // for(int j = 0; j< numBlank/2; j++)
    //     //     cout<< " ";
    //     cout << "\n";

    // }

    for(int i = 1; i < input+1; i++){
        for(int j=0; j<input-i;j++)
            cout<<" ";
        for(int k=0; k< i*2-1;k++)
            cout<<"*";
        cout<< "\n";
    }
    return 0;
}