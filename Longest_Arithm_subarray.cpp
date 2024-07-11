#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
       
        /*int pd=a[1]-a[0];
        int curr=0; 
        int ans=2;
        for(int i=1;i<n;i++){     *Dumb approch used by me*
             curr=a[i+1]-a[i];
             if(pd==curr){
             ans++;
             pd=curr;
        }
        else{
            pd=curr;
            ans=2;
        }
        cout<<ans<<endl;
        }*/
        
        int ans=2;//final subarray length
        int pd=a[1]-a[0];
        int j=2;
        int curr=2;// current arith. subarray length
        while(j<n)
        {
            if(pd==a[j]-a[j-1]){
                curr++;
            }
            else{
                pd=a[j]-a[j-1];
                curr=2;
            }
            ans=max(ans,curr);//regular updating the value of longest arith. subarray size
            j++;
        }
    cout<<ans<<endl;
    return 0;
}