#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int arr[9];
    int maxNum = 0;

    for (int i =0; i <9; i++){
        cin >> arr[i];
        if(arr[i]> arr[maxNum]){
            maxNum = i;
             }
        }
    cout << arr[maxNum] << endl << maxNum+1;

 return 0;
}