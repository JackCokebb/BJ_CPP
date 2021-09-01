#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int input,minNum=101;
    int sum=0;

    for(int i = 0; i < 7; i++){
        cin >> input;
        if(input%2 ==0)
            continue;
        else{
            sum += input;
            if(input < minNum)
                minNum = input;

        }
    }
    // if(sum ==0) 
    //     cout << -1;
    // else
    //     cout << sum <<endl << minNum;

    if(sum)
        cout << sum <<endl << minNum;
    else
        cout << -1;
    return 0;
}