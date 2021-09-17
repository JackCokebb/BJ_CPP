#include <bits/stdc++.h>
using namespace std;

int main(void){

    int N, K, count=1;
    cin >> N>> K;
    int end = N;

    list<int> people;
    for(int i = 1; i <=N ; i++){
        people.push_back(i);
    }
    list<int>::iterator it = people.begin();

    cout << "<";

    for(int i = 1 ; i<N; i++){
        for(int j = 1; j<K;j++){
            if(count== end){
                it = people.begin();
                count = 1;
                continue;
            }
            it++;
            count++;
        }
        cout << *it<<", ";
        if(count==end){
            people.erase(it);
            end--;
            it= people.begin();
            count =1;
        }
        else{
            it = people.erase(it);
            end--;
        }

    }
    it= people.begin();
    cout << *it;
    cout<<">";

    return 0 ;
}