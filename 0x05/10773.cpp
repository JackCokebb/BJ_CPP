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

    int k =0, comm=0, nextNum=1;
    list<char> command;
    list<char>::iterator it = command.begin();
    cin >> k;
    while(true){
        cin >> comm;
        if(comm > nextNum){
            for(int i = nextNum; i<= comm;i++){
                push(i);
                nextNum++;
                command.push_back('+');
                }
            pop();
            command.push_back('-');
            }
        
        else if(comm == nextNum){
            push(comm);
            pop();
            command.push_back('+');
            command.push_back('-');
            nextNum++;
        }
        else if(comm < nextNum){
            if(top() !=comm){
                cout<< "NO";
                return 0;
            }
            else{
                pop();
                command.push_back('-');
            }
        }
        if(nextNum>k&&empty()==0)
            break;

    }
    for(it = command.begin(); it!=command.end(); it++)
        cout<<*it<<"\n";
 

    return 0;
}