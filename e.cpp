#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> Boris, Nursik;

    int b[5];
    int n[5];
    
    for(int i=0; i<5; i++){
        cin>> b[i];
    }

    for(int i=0; i<5; i++){
        cin>> n[i];
    }

    for(int i=4; i>=0; i--){
        Boris.push(b[i]);
    }

    for(int i=4; i>=0; i--){
        Nursik.push(n[i]);
    }

    int moves=0;
    

    while(!Boris.empty() && !Nursik.empty() && moves<1000000){
        

        int Boris_a=Boris.top(); 
        Boris.pop();

        int Nursik_a=Nursik.top();
        Nursik.pop();

        bool Boris_winner;
        
        if ((Boris_a==0 && Nursik_a==9)){
            Boris_winner=true;
        }

        else if(Boris_a==9 && Nursik_a==0){
            Boris_winner=false;
        }
    
        else{
            Boris_winner=(Boris_a>Nursik_a);
        }

        stack<int> temp;

        if (Boris_winner){
            while(!Boris.empty()){
                temp.push(Boris.top());
                Boris.pop();
            }
            Boris.push(Nursik_a);
            Boris.push(Boris_a);

            while(!temp.empty()){
                Boris.push(temp.top());
                temp.pop();
            }
        }
        else{
            while(!Nursik.empty()){
                temp.push(Nursik.top());
                Nursik.pop();
            }
            Nursik.push(Nursik_a);
            Nursik.push(Boris_a);

            while(!temp.empty()){
                Nursik.push(temp.top());
                temp.pop();
            }
        }
        moves++;
    }

    if (moves>=1000000){
        cout<< "blin nichya";

    }
    else if(Boris.empty()){
        cout<< "Nursik "<< moves<< endl;

    }
    else{
        cout <<"Boris "<< moves<< endl;
    }

    return 0;

}