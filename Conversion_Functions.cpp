#include<bits/stdc++.h>
using namespace std;

int binarytoDecimal(int n){
    int ans=0;
    int x=1;
    while(n>0){
        int y=n%10; // to access last digit
        ans+=x*y;
        x*=2;
        n/=10; // reducing the number
    }
    return ans;

}

int octaltoDecimal(int n){
    int ans=0;
    int x=1;
    while(n>0){
        int y=n%10; // to access last digit
        ans+=x*y;
        x*=8;
        n/=10; // reducing the number
    }
    return ans;

}

int HexadectoDecimal(string n){
    int ans=0;
    int x=1;
    int s=n.size();
    for(int i=s-1;i>=0;i--){
        if( n[i]>='0' && n[i]<='9'){
            ans+= x*(n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<='F' )
        {
            ans+=x*(n[i]-'A'+10); // to make A=10 B=11 C=12 D=13 E=14 F=15
        }
        x*=16;
    }

    return ans;
}

int DecimaltoBinary(int n){
    int x=1; int ans=0; int count=0;
    while(x<=n){
        x*=2;
    }
    x/=2;         // because loop will alawys run one more time so to reduce x to correct form
    while(x>0){
        int lastDig=n/x;
        n-=lastDig*x;
        x/=2;
        ans =ans*10 +lastDig;
    }
    return ans;
}

int DecimaltoOctal(int n){
    int x=1; int ans=0;
    while(x<=n){
        x*=8;
    }
    x/=8;         // because loop will alawys run one more time so to reduce x to correct form
    while(x>0){
        int lastDig=n/x;
        n-=lastDig*x;
        x/=8;
        ans =ans*10 +lastDig;
    }
    return ans;

}

string DecimaltoHexadecimal(int n){
    int x=1;
    string ans="";
    while(x<=n){
        x*=16;
    }
    x/=16;  // because loop will alawys run one more time so to reduce x to correct form
    while(x>0){
        int lastDig=n/x;
        n-=lastDig*x;
        x/=16;
        if(lastDig<=9){
            ans=ans+to_string(lastDig);
        }else{
            char c='A' +lastDig-10; // for A=10;B=11;C=12;D=13;D=14;E=15
            ans.push_back(c);
        }
    }
    return ans;
}

int main(){

    //int n;
    //cin>>n;
    //cout<<binarytoDecimal(n)<<endl;
    //cout<<octaltoDecimal(n)<<endl;
    // string s;
    // cin>>s;
    // cout<<HexadectoDecimal(s)<<endl;
    
    int n;
    cin>>n;
    //cout<<DecimaltoBinary(n)<<endl;
   //cout<<DecimaltoOctal(n)<<endl;
   //cout<<DecimaltoHexadecimal(n)<<endl;
    cout<<DecimaltoBinary(n)<<endl;
    return 0;
}