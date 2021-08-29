#include <bits/stdc++.h>
using namespace std;



int main(){
    ios::sync_with_stdio(0); // dissync between c's standard stream and c++'s standard stream.
    cin.tie(0);  //untie cin and cout. if stream tied, when input, output requests from the other stream, compiler will flush the stream (not the other). 

    int x;
    int y;
    int sum;

    cin >> x;
    cin >> y;

    cout << x + y;

    return 0;  
}