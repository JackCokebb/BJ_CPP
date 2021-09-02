#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int call=0, Ysum=0, Msum=0;
    cin >> call;
    int callTime=0;

    for(int i = 0 ; i< call; i++){
        cin >> callTime;
        Ysum += callTime/30 *10 +10;
        Msum += callTime/60 *15 +15;
    }
    if(Ysum>Msum){
        cout << "M" <<" " <<Msum;
    }
    else if(Msum>Ysum){
        cout << "Y" <<" " <<Ysum;
    }
    else{
        cout << "Y M" <<" " <<Msum;
    }
    return 0;

}