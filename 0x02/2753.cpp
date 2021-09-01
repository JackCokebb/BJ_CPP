#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int input, result;
    cin >> input;

    if(input %4 ==0&& input %100 == 0)
    {
        if(input % 400 ==0)
            result = 1;
        else  result = 0;
    }
    else if(input %4 ==0 && !(input %100 ==0))
        result = 1;
    else 
        result = 0;

    cout << result;
    return 0;
}