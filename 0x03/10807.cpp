#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int len=0,count=0,crit;
    
    cin >> len;
    int input[len];
    
    for(int i =0 ; i<len; i++){
        cin >> input[i];
    }
    cin >> crit;

    for(int i =0 ; i <len; i++){ 
        if(input[i]==crit)
            count++;
    }    
        cout << count;
        
    
    return 0;
}