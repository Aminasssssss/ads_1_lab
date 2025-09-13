#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    string s;
    cin>> s;

    queue<int> Saku;
    queue<int> Katsu;

    for(int i=0; i<n; i++){
        if(s[i]=='S'){
            Saku.push(i);
        }
        else{
            Katsu.push(i);
        }
    }
    while(!Saku.empty() && !Katsu.empty()){
        int indexS=Saku.front();
        Saku.pop();

        int indexK=Katsu.front();
        Katsu.pop();

        if(indexS< indexK){
            Saku.push(indexS+n);
        }
        else{
            Katsu.push(indexK+n);
        }

    }
    if(!Saku.empty()){
        cout<< "SAKAYANAGI";
    }
    else{
        cout<< "KATSURAGI";
    }

    return 0;
}