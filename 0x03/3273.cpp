#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n = 0,input,count=0,x;
    int exist[2000001]={};
    cin >> n;
    for(int i =0; i <n;i++){
        cin >> input;
        exist[input]++;
    }
    cin >> x;
    for(int i =1; i <(x+1)/2;i++)
        if(exist[i]==1 && exist[x-i]==1)
            count++;
    cout << count;

}