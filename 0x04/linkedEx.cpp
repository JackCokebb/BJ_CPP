#include <bits/stdc++.h>
using namespace std;

struct node {
    struct node *pre, *nxt;
    int data;
};

void traverse(node* a){
    node* cur = a;
    while(cur->nxt != NULL){
        if(cur->data!=-1){
            cout << cur->data << " "; 
            cur = cur->nxt;
            }
        }
        cout<<"\n\n";
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);


}