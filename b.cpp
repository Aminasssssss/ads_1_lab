#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main(){
    int n;
    cin>> n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>> a[i];
    }
    int answers[n];
     
    stack<int> stack;

    for(int i=0; i<n; i++){
        while(!stack.empty() && a[stack.top()]> a[i]){
            stack.pop();
        }
        if(stack.empty()){
            answers[i]=-1;
        }
        else{
            answers[i]=a[stack.top()];
        }

        stack.push(i);

    }
    for(int i=0; i<n; i++){
        cout <<answers[i]<< " ";
    }
    cout<< endl;
    return 0;
}