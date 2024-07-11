#include<bits/stdc++.h>
using namespace std;

int main(){
      /*
      Condititons for record breaking days:
      *Strictly greater than pevious values AND
      *Strictly greater than following value
      */
     /*
     Brute force approach:
     Iterate over all the elements and check whether it is a record breaking day or not.
     To check a[i] is a record breaking day, we have to iterate over a[o],a[1],...,a[i-1].
     Time complexity for this operation :O(n)
     Overall time complexity :O(n^2) 
     */
    /*
    Optimised approach :
    Optimize step one by keeping a variable mx that will store the maximum value till a[i];
    then check,    a[i]>mx; 
                    a[i]>a[i+1];{if i+1<n}
                    and update mx=max(mx;a[i]);
    So step 1 gets reduced to time complexity of O(1);
    Overall complexity becomes O(n)
    */

/*int n;
      cin>>n;
      int a[n+1];
       a[n]=-1;
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      //my approch :( after understanding the solution
      int cas=0;
      int rb=0;
      int mx=-1;
      for(int i=0;i<n;i++){
        if(a[i]>>a[i+1] && a[i]>>mx){
            rb++;
      }
      mx=max(mx,a[i]);
      cas++;
      cout<<cas<<":"<<rb<<endl;
      }*/    
    
    
    
   
   int n; 
   cin>>n;
   int a[n+1];
   a[n]=-1;

   for(int i=0;i<n;i++){
    cin>>a[i];
   }

    if(n==1){
        cout<<"1"<<endl; //if only one element is passed;
        return 0;  }

    int ans=0;
    int mx =-1;

    for(int i=0;i<n;i++){
        if(a[i]>mx && a[i]>a[i+1] ){
            ans++;
        }
        mx=max(mx,a[i]);
      }
    cout<<ans<<endl;
    return 0;
}