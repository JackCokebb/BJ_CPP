#include <bits/stdc++.h>
using namespace std;

// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0);

//     int roomNum,temp,max=0,total;
//     cin >> roomNum;
//     if(roomNum==0)
//         max = 1;
//     int number[10]={};

//     while(roomNum){
//         number[roomNum % 10]++;
//         roomNum/=10;
//     }
//     for(int i =0; i <10; i++){
//         if(number[i]>max){
//             if(i==6 || i==9){
//                 if((number[6]+number[9])%2 ==1){
//                     temp = (number[6]+number[9])/2 +1;
//                 }
//                 else{
//                     temp = (number[6]+number[9])/2;
//                 }
//                 if(temp>max)
//                     max = temp;
//             }
//             else
//                 max= number[i];
            
//             }
//     }
//     total = max;
//     cout << total;

//     return 0;
// }

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  
  int roomNum, number[10] = {}, total = 1; //set total as 1 to handle exception when input is 0
  cin >> roomNum;
  
  while(roomNum){
    number[roomNum%10]++;
    roomNum /= 10;
  }

  for(int i = 0; i < 10; i++){
    if(i == 6 || i == 9) continue;
    total = max(total, number[i]);
  }
  
  total = max(total, (number[6]+number[9]+1)/2); //ceiling of (number[6]+number[9])/2 is same as the number of 'number sets' 
  cout << total;
}