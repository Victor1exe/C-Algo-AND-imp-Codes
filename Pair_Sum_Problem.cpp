#include<bits/stdc++.h>
using namespace std;

/*bool pairsum(int arr[],int n,int k){
    for(int i=0;i<n-1;i++){           //Time complexity is O(n^2)
        for(int j=i;j<n;j++){
            if(arr[i]+arr[j] == k){
                cout<<i<<" "<<j<<endl;
                return true;
            }
        }
    }
    return false;
}
*/


int main(){
    int arr[]={2,4,7,11,14,16,20,21};
    int k=31;
    int a=0; int b=8;
    for(int i=0;i<8;i++){
        if(arr[a]+arr[b]>k){
            b--;
        }
        else if(arr[a]+arr[b]<k){       //only applicable in the case of the sorted array
            a++;
        }
        }
        if(arr[a]+arr[b]==k){
            cout<<a<<" "<<b<<endl;
        }else{
            cout<<"Not Equal"<<endl;
        }

    return 0;
}