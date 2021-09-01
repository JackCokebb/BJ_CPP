#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x,y,z;
    int reward = 0;

    cin >> x >> y >> z;
    
    if( x==y || y==z || x==z){
        if (x == y&& y==z) {
        reward = 10000 + x * 1000;
        }
        else if(x==y || x ==z ){
            reward = 1000 + x * 100;
        }
        else if (y==z){
            reward = 1000 + y * 100;
        }
    }
    else{
        int maxNum = max({x,y,z});
        reward = maxNum * 100;
    }

    cout << reward;


    return 0;
}