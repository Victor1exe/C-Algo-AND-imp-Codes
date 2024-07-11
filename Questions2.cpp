#include<bits/stdc++.h>
using namespace std;

// Counting Bits

// vector<int> count(int n){
//     vector<int> ans(n);
//     ans.push_back(0);
//     for(int i=0;i<=n;i++){ 
//         if(i%2==0){
//             ans[i]=ans[i/2];
//         }else{
//             ans[i]=ans[i-1]+1;
//         }}
//     return ans;
// }


// int main(){
//     int n=5;
//     vector<int> res=count(n);
//     for(int i=0;i<res.size();i++){
//         cout<<res[i]<<" ";
//     }
//     return 0;
// }


// To find a unique number except all other duplicates

// int unique(int arr[],int n){
//     int xors=0;
//     for(int i=0;i<n;i++){
//         xors=xors^arr[i];
//     }
//     return xors;
// }

// int main(){
//     int arr[]={2,4,6,3,4,6,2};
//     cout<<unique(arr,7)<<endl;
//     return 0;
// }

// To find two uniques except all duplicates

// int Setbit(int n,int m){
//     return((n & (1<<m))!=0);        //imp
// }

// void unique(int arr[],int n){
//     int xorsum=0;
//     for(int i=0;i<n;i++){
//         xorsum=xorsum^arr[i];
//     }
//     int tempxor=xorsum;
//     int setbit=0;
//     int pos=0;
//     while(setbit!=1){
//         setbit=(xorsum&1);
//         xorsum=xorsum>>1;
//         pos++;
//     }
//     int newxor=0;
//     for(int i=0;i<n;i++){
//         if(Setbit(arr[i],pos-1)){
//             newxor=newxor^arr[i];
//         }
//     }
//     cout<<newxor<<endl;
//     cout<<(tempxor^newxor)<<endl;
// }

// int main(){
//     int arr[]={2,4,6,7,4,5,6,2};
//     unique(arr,8);
//     return 0;
// }


// To find one unique except all triplets

bool getBit(int n, int pos){
    return((n&(1<<pos))!=0);
}

int setBit(int n,int pos){
    return(n|(1<<pos));
}

int unique(int arr[],int n){
    int result=0;
    for(int i=0;i<64;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            if(getBit(arr[j],i)){
                sum++;
            }
        }
        if(sum%3!=0){
            result=setBit(result,i);
        }
    }
    return result;
}

int main(){
    int arr[]={1,3,2,3,4,2,1,1,3,2};
    cout<<unique(arr,10)<<endl;
    return 0;
}