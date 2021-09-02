#include <bits/stdc++.h>
using namespace std;


//  void swapCard(int* arr, int start, int end){
//         int tempDeck[20]={};
//         int i =0;
//         for(int j = 0, i=end; j<end-start+1;j++,i--){
//             tempDeck[j] = arr[i-1];
//         }
//         for(int i = start, j=0; i<end+1; i++,j++){
//             arr[i-1] = tempDeck[j];
//         }
//     }
void swapCard(int* arr, int start,int end){
    for(int i = 0; i < (end-start+1)/2; i++)
        swap(arr[start+i], arr[end+i]);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int card[20] ={};
    int start,end;
    for(int i =0; i<20; i++){
        card[i]=i+1;
    }

    for(int i = 0; i<10;i++){
        cin >> start>>end;
        swapCard(card,start,end);
    }
    for(int i=0; i<20;i++){
        cout << card[i]<<" ";
    }

    return 0;
}