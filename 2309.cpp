#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[9];
    int real[7];
    int index1,index2;
    int sum=0;
    bool done = false;
    for(int i = 0; i < 9; i++){
        cin>>  arr[i];

    }
    for(index1=0;index1<8; index1++){
        for(index2=index1+1;index2<9;index2++){
            sum = 0;
            for(int i =0; i< 9; i++){
                if(i != index1 && i != index2){
                    sum += arr[i];
                    
                }
                else 
                    continue;
               
            }
            
            if(sum == 100){
                    // for(int j =0; j <9; j++){
                    // if(j != index1 && j != index2){
                    //     real[j] = arr[j];
                    // }
                    // else
                    //     real[j]=100;
                    // }
                    // done = true;
                    // break;
                    for(int j=0, k=0; j<9;j++)
                        if(j != index1 && j != index2){
                            real[k++] = arr[j];
                            }
                    done = true;
                    break;
                }
            
        }
        if(done ==true)
                break;

    }
    sort(real,real+7);
    for(int i =0; i<7; i++)
        cout << real[i] << endl;
    return 0;
}