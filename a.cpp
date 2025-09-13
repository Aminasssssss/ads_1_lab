#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main(){
    int T;
    cin >>T;
    
    while (T--){
        int n;
        cin >>n;
        
        deque<int> dq;
        
        for (int i=n; i>=1; i--){
            dq.push_front(i);
            
            for (int j=0; j<i; j++){
                int last_card =dq.back();
                dq.pop_back();
                dq.push_front(last_card);
            }
        }
        
        
        vector<bool> check(n+1,false);
        bool valid =true;
        
        for (int i=0; i<n;i++){
            int card=dq[i];
            if (card<1 || card>n|| check[card]) {
                valid =false;
                break;
            }
            check[card]=true;
        }
        
        
        if (valid){
            for (int i=0;i<n;i++) {
                cout<< dq[i];
                if (i< n-1){
                    cout<< " ";
                }
            }
            cout<< endl;

        } 
        else {
            cout<< -1<< endl;
        }
    }
    
    return 0;
}