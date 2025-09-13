#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int limit=20000;
    vector<bool> isPrime(limit+1, true);
    isPrime[0]=false;
    isPrime[1]=false;

    for (int i=2; i*i<=limit; i++){
        if (isPrime[i]){
            for (int j=i*i; j<=limit; j+=i){
                isPrime[j]= false;
                
            }
        }
    }
    int count=0;
    for(int i=2; i<=limit; i++){
        if(isPrime[i]){
            count++;
            if(count==n){
                cout<< i<< endl;
                break;

            }
        }
    }
    return 0;
}