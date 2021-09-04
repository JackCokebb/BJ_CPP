#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string input1,input2;
    int a[26]={}, b[26]={},count=0;
    cin >> input1>>input2;

    for(int i = 0 ; i < input1.length(); i++){
        a[input1[i]-'a']++;
    }
    for(int i = 0 ; i < input2.length(); i++){
        b[input2[i]-'a']++;
    }
    for(int i= 0 ; i <26; i++){
        count += abs(a[i]-b[i]);
    }
    cout << count;
    return 0;
}