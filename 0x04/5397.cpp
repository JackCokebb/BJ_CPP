#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string input;
    int commNum=0;
    cin >> commNum;

    for(int i = 0; i< commNum; i++){
        list<char> txt ={};
        list<char>::iterator it = txt.begin();
        cin >> input;

        for(auto a : input){
            switch(a){
                case '<' : 
                    if(it != txt.begin())
                        it--;
                    break;
                case '>' :
                    if(it != txt.end())
                        it++;
                    break;
                case '-' : 
                    if(it != txt.begin()){
                        it--;
                        it = txt.erase(it);                                     
                    }
                    break;
                default :
                    txt.insert(it,a);                  
                    break;
            }
        }
        for(auto t : txt){
            cout << t;
        }
        cout << "\n";
    }
    return 0;
}