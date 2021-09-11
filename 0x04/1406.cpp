#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string input;
    char comm, arg;
    int commNum=0;
    cin >> input;
    cin >> commNum;

    list<char> txt ={};
    list<char>::iterator it = txt.begin();
    

    for(int i =0 ; i < (int)input.length(); i++){
        txt.push_back(input[i]);
        it++;
    }
    it++;
    list<char>::iterator it2 = txt.end();

    for(int i = 0; i< commNum; i++){
        cin >> comm;
        switch(comm){
            case 'P' : 
                cin >> arg;
                txt.insert(it,arg);                  
                break;
            case 'L' : 
                if(it == txt.begin())
                    break;
                else
                    it--;
                break;
            case 'D' :
                if(it== txt.end())
                    break;
                else{
                    it++;
                    break;
                }
            case 'B' : 
                if(it == txt.begin())
                    break;
                else{
                    if(it == it2){
                        it--;
                        txt.erase(it);
                        it = txt.end();
                    }
                    else{
                        it--;
                        txt.erase(it++);
                    }                    
                }
        }
    }
    for(auto t : txt){
        cout << t;
    }

    return 0;
}