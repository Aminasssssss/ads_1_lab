#include <iostream> 
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    const int limit=10000;
    vector<bool> isPrime(limit+1, true);
    isPrime[0]=false;
    isPrime[1]=false;

    for (int i=2; i*i<=limit; i++){
        if(isPrime[i]){
            for(int j=i*i; j<=limit; j+=i){
                isPrime[j]=false;

            }
        }
    }
    vector<int> primes;
    for(int i=2; i<=limit; i++){
        if (isPrime[i]){
            primes.push_back(i);
        }
    }
    int pn= primes[n-1];
    int ans= primes[pn-1];
    cout << ans << endl;
    return 0;
}