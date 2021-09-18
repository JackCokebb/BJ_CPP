#include <bits/stdc++.h>
using namespace std;

int stac[1000001];
int pos =0;

void push(int input){
    stac[pos++] = input;
}

int pop(){
    if(pos>0)
        return stac[--pos];
    else
       return 0;
}

void size(){
    cout << pos <<"\n";
}

int empty(){
    if(pos==0)
        return 0;
    else 
        return 1;
}

int top(){
    if(pos == 0)
        return 0;
    else
       return stac[pos-1];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k =0, sum =0,input;
    cin >> k;
    for(int i =0; i<k; i++){
        cin >> input;
        if(input == 0)
            pop();
        else
            push(input);
    }

    while(empty()!=0)
        sum += pop(); 
    cout << sum;

    return 0;