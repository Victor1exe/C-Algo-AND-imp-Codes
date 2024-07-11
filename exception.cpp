#include<bits/stdc++.h>
using namespace std;

int main(){
   
    int x=-1;

    cout<<"Befor try \n";

    try{
        cout<<"Inside try \n";
        if(x<0){
            throw x;
            cout<<"Inside Throw (Never Executed) \n";
        }
    }catch(int x){
        cout<<"Execption caught \n";
    }

    cout<<"Catch Executed";
    return 0;
}