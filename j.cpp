#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<long long> dq;
    char ch;

    while(cin>> ch){
        if(ch=='!'){
            cout<< endl;
            break;
            
        }
        else if(ch=='+'){
            long long x;
            cin>> x;
            dq.push_front(x);

        }
        else if(ch== '-'){
            long long x;
            cin>> x;
            dq.push_back(x);

        }
        else if(ch=='*'){

            if(dq.empty()){
                cout << "error"<< endl;
            }
            else if(dq.size()==1){
                long long x=dq.front();
                cout<< (x+x) << endl;
                dq.pop_front();
            }
            else{
                long long a = dq.front();
                long long b = dq.back();
                cout<< (a+b)<< endl;
                dq.pop_front();
                dq.pop_back();
            }
        }
    }
    return 0;
}