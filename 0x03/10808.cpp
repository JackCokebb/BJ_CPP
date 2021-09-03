#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    // int len=0,count;
    // char crit='a';
    string input;
    cin >> input;
    int count[26]={};
    // len = input.length();

    // for(crit; crit <= 122; crit++){ //for all alphabet
    //     count=0;
    //     for(int j=0; j<len; j++){
    //         if(input[j]==crit)
    //             count++;
    //     }
    //     cout << count << " ";
    // }
    for(auto i : input)
        count[i-'a']++;
    for(int i = 0; i<26; i++)
        cout << count[i] << " ";


    return 0;
}