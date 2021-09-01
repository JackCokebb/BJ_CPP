#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

   int x,y,z,r;
   int sum;
   char result;

    for(int i = 0; i < 3; i++){
   cin >> x>> y>> z>> r;
   sum = x+y+z+r;

   switch(sum){
        case 0 : 
            result = 'D';
            break;
        case 1 : 
            result = 'C';
            break;
        case 2 : 
            result = 'B';
            break;
        case 3 : 
            result = 'A';
            break;
        case 4 : 
            result = 'E';
            break;
   }

    cout << result<<endl;
    }
    return 0;
}

//-------------------------------------------
// int result, input;
// string res = "DCBAE";

// int main(void){
//   ios::sync_with_stdio(0);
//   cin.tie(0);
    
//   for(int r = 0; r < 3; r++) {
//     result = 0;
//     for(int c = 0; c < 4; c++) {
//       cin >> input;
//       result += input;
//     }
//     cout << res[result] << '\n';
//   }
// }
