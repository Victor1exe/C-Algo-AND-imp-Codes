#include<bits/stdc++.h>
using namespace std;
//GET BIT
void getbit(int a,int b){
    int bitmask=1<<b;
    if((bitmask&a)!=0){
        cout<<"Bit is 1";
    }else{
        cout<<"Bit is 0";
    }
    
}

//SET BIT
void setbit(int a,int b){
    int bitmask=1<<b;
    cout<<((bitmask|a));    
}

//CLEAR BIT
void clearbit(int a,int b){
    int bitmask=1<<b;
    int bitmkn=~(bitmask);
    cout<<((bitmkn&a));
}

//UPDATE BIT
void updatebit(int a,int b,int c){
    if(c==1){int bitmask=1<<b;
    cout<<((bitmask|a)); 
    }else{ int bitmask=1<<b;
    int bitmkn=~(bitmask);
    cout<<((bitmkn&a));
    }
    //  OR
    // int bitmask=1<<b;
    // int bitmkn=~(bitmask);
    // a=a&bitmkn;
    // cout<<((a|c<<b));
}

int main(){
    int n=5;
    int pos=2;
    int i=0;
    updatebit(n,pos,i);
    return 0;
}
