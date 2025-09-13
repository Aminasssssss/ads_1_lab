//Given two strings. Each string contains 
// lower case English letters and the # symbol, 
// which means you typed backspace. Check 
// if two strings are equal.


#include <iostream>
#include <string>
#include <stack>
using namespace std;

string amina(string s){
    stack<char> st;

    for (int i=0; i<s.size(); i++){
        char c=s[i];

        if (c=='#'){
            if (st.empty()==false){
                st.pop();
            }
        }
        else{
            st.push(c);
        }
    }
    
    string res=" ";

    while (st.empty()==false){
        char tchar = st.top();
        st.pop();

        res = tchar + res;
    }
    return res;
}
int main(){
    string a,b;

    cin>> a>> b;

    string res_a = amina(a);
    string res_b = amina(b);

    if (res_a == res_b){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}




