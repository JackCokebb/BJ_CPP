#include <bits/stdc++.h>
using namespace std;

void L(list<char>& txt,){

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string input;
    char comm, arg;
    int commNum=0;
    cin >> input;
    cin >> commNum;

    list<char> txt ={};
    int cursor=input.length();
    for(int i =0 ; i < input.length(); i++){
        txt.push_back(input[i]);
        cursor++;
    }

    for(int i = 0; i< commNum; i++){
        cin >> comm;
            if(comm == 'P'){
                cin >> arg;
                txt.push_back(arg);
                cursor++;
                }
    }

    return 0;
}