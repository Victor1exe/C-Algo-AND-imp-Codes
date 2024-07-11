/*
Base idea:
Build a boolean check[] array that will depict any element x is present in the array or not.
ex: check[]=[F,F,F,F,F];
Iterate over the given array and mark non-neg a[i] as True.
Now we iterate over check[] to find the index of !st positive value that is false i.e. missing 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool check[n];        
    /*
    Correct code here:
    const int N =1e6+2;
    bool check[N];
    */
    for(int i=0;i<n;i++){
        check[i]=false;
    }
    for(int i=0;i<n;i++){
        if(a[i] >=0){
            check[a[i]]=true;
        }
    }
    
    /*
    Correct code here:
    int ans =-1;
    for(int i=1;i<N;i++){
        if(check[i]==false){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
    */

    int i=0;
    while(i<n){
        if(check[i]==false){
            cout<<i;
            break;
        }
        i++;
        if(i==n){
            cout<<"No number is missing";
        }
    }
    
    return 0;
}