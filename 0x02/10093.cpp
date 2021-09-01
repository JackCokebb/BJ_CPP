#include <bits/stdc++.h>
using namespace std;


int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    long long x,y;  //check the proper data type
    cin >> x >>y;
    if(x>y)
        swap(x,y);  // there is no condition about which variable is bigger.
    
    if(x==y||x-y==1){
        cout << 0;
    }
    else{
        cout << y-x-1<<endl;
        for(long long i = 1; i < y-x; i ++)
            cout << x+i<<" ";
    }

}