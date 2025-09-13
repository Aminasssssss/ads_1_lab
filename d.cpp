#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    string s;
    cin>> s;

    stack<char> stack;

    for (int i=0; i<s.size(); i++){
        char c=s[i];

        if(!stack.empty() && stack.top()==c){
            stack.pop();
        }
        else{
            stack.push(c);
        }

    }
    if(stack.empty()){
        cout<< "YES";
    }
    else{
        cout<< "NO";
    }

    return 0;
}
