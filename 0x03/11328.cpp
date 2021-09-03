#include <bits/stdc++.h>
using namespace std;

// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0);

//     int testCase=0,done=0;
//     string x, y;
//     cin >> testCase;
//     for(int i =0; i<testCase; i++){
//         cin >> x >> y;
//         if(x.length()!=y.length()){
//             cout<<"Impossible\n";
//             continue;
//         }
//         for(int j=0; j<x.length(); j++){
//             for(int k =0; k<y.length();k++){
//                 if(x[j] == y[k]){
//                     x[j]='0';
//                     y[k]='1';
//                     done++;
//                 }
//             }
//         }
//         if(done != x.length())
//             cout << "Impossible\n";
//         else
//             cout << "Possible\n";
//         done =0;
            
//     }
//     return 0;
// }

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int testCase;
  cin >> testCase;
  while (testCase--) {
    int alp[26] = {}; //alphabet array
    string s1, s2;
    cin >> s1 >> s2;

    for (auto c : s1) alp[c-'a']++; 
    for (auto c : s2) alp[c-'a']--; 

    bool isPossible = true;
    
    for (int i : alp){
      if (i != 0) isPossible = false;
    }

    if(isPossible) cout << "Possible\n";
    else cout << "Impossible\n";
  }
}