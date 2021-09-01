#include <bits/stdc++.h>

using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int input[3];
    int temp;
    //int* min;
    int minn;
    for(int i =0; i<3;i++){
        cin >> input[i];
    } 
    for(int i =0; i<3;i++){
        for(int j = i+1; j<3;j++){
            //min = &input[i];
            minn=i;
            if(input[minn]>input[j]){
                //min = &input[j];
                minn=j;
            }
            temp = input[i];
            input[i]= input[minn];
            input[minn]=temp;

        }
    } 
    for(int i =0; i<3;i++){
        cout << input[i] << " ";
    }

    


    return 0;
}

// int main(void){
//   ios::sync_with_stdio(0);
//   cin.tie(0);

//   int a, b, c; 
//   cin >> a >> b >> c;
//   int d, e, f; 
//   d = min({a,b,c});
//   f = max({a,b,c});
//   e = a+b+c-d-f;
//   cout << d << " " << e << " " << f;
// }