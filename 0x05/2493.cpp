// #include <bits/stdc++.h>
// using namespace std;

// int stac[1000001];
// int pos =0;

// void push(int input){
//     stac[pos++] = input;
// }

// int pop(){
//     if(pos>0)
//         return stac[--pos];
//     else
//        return 0;
// }

// void size(){
//     cout << pos <<"\n";
// }

// int empty(){
//     if(pos==0)
//         return 0;
//     else 
//         return 1;
// }

// int top(){
//     if(pos == 0)
//         return 0;
//     else
//        return stac[pos-1];
// }

// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int tower[500001];
    
//     int k = 0, input;
//     cin >> k;

//     for(int i =0 ; i< k; i++){
//         cin>> input;
//         tower[i]= input;
//     }
    
    
//     for(int i = k-1; i >=0 ; i--){
//         int j= i-1;
//         while(true){
            
//             if(j==-1){
//                 push(0);
//                 break;
//             }
//             if(tower[j]>= tower[i]){
//                 push(j+1);
//                 break;
//             }
//             else if(j==0){
//                 push(0);
//                 break;
//                 }
//             j--;
//         }

//     }
      


//     for(int i = 0; i < k; i++)
//         cout << pop() << " ";

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int N;
stack<pair<int,int>> tower;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> N;  
  tower.push({100000001, 0});
  for (int i = 1; i <= N; i++) {
    int height;
    cin >> height;
    while (tower.top().X < height)
      tower.pop();    
    cout << tower.top().Y << " ";
    tower.push({height, i});      
  }
}