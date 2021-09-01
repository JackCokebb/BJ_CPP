#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int input,crit,minIndex;
    int minNum = 100;
    int sum =0;
    int arr[5];

    for(int i =0 ; i<5; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    /*for(int i =0 ; i<5; i++){
        crit = arr[i];
        minNum = 100;
        for(int j = i+1 ; j <5;j++){
            if(minNum > arr[j]){
                minIndex = j;
                minNum = arr[j];
            }
        }
        if(crit >minNum){
            arr[i] = arr[minIndex];
            arr[minIndex] = crit;
        }
    }*/
    sort(arr,arr+5);

    cout << sum / 5 <<endl << arr[2];


    return 0;
}