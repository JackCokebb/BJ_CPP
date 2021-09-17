#include <bits/stdc++.h>
using namespace std;

int stac[10001];
int pos =0;

void push(int input){
    stac[pos++] = input;
}

void pop(){
    if(pos>0)
        cout <<stac[--pos]<<"\n";
    else
        cout<< -1 <<"\n";
}

void size(){
    cout << pos <<"\n";
}

void empty(){
    if(pos==0)
        cout << 1<<"\n";
    else 
        cout << 0<<"\n";
}

void top(){
    if(pos == 0)
        cout <<-1<<"\n";
    else
        cout << stac[pos-1]<<"\n";
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N = 0;
    string input;
    int a=0;
    cin >> N;
    for (int i =0; i <N; i++){
        cin >> input;
        if(input=="push"){
            cin >> a;
            push(a) ;
        }
        else if(input=="pop")
            pop();
        else if(input == "size"){
            size();
        }

        else if(input == "empty" ){
            empty();
        }
        else if(input == "top"){
            top();
        }
        
    }
    return 0;
}
