#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b,c;
    int result,len,temp;
    int count=0;
    int Count[10]={};

    cin >> a>>b>>c;
    result = a*b*c;


    // for(int i = 1 ; i < 10 ;i++){
    //     if(result / (int)pow(10,i) ==0){
    //         len = i;
    //         break;
    //     }
    // }
    // for(int i = 0; i<10; i++){
    //     count = 0;
    //     for(int j = 1; j<=len;j++){
    //         temp = result / (int)pow(10, j-1);
    //         if(temp %10== i)
    //             count++;
    //     }
    //     cout << count <<endl;
    //  }

    while(result>0){
        Count[result%10]++;
        result /=10;
    }
    for(int i = 0; i<10; i++){
        cout << Count[i]<<endl;
    }
    return 0;
}