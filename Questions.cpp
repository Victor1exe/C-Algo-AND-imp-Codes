#include<bits/stdc++.h>
using namespace std;

// Compute XOR from 1 to n:

// void computeXOR(int n){
//     int result=0;
//     if(n==0){
//         cout<<result;       //Complexity O(n)
//     }else{
//         for(int i=1;i<=n;i++)
//         result=result^i;
//         }
//         cout<<result;
// }

// int main(){

    
//     int n;
//     cin>>n;
//     computeXOR(n);
//         return 0;
// }

// void computeXOR(int n){
//     if(n%4==0){
//         cout<<n;
//     }                       //Complexity is O(1)    //Logic is rem=0 xor is same as n; rem=1 xor is 1; rem=2 xor is n+1; rem=3 xor is 0
//     else if(n%4==1){
//         cout<<1;
//     }else if(n%4==2){
//         cout<<n+1;
//     }else{
//         cout<<0;
//     }

// }

// int main(){
//     int n;
//     cin>>n;
//     computeXOR(n);
//     return 0;
// }

// Equal Sum and XOR

// int countValues(int  n){
//     int unset_bits=0;
//     while(n){
//         if((n&1)==0){    // to find unset bit
//             unset_bits++;
//         }
//     n=n>>1;
//     }
//     return pow(2,unset_bits);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<countValues(n);
//     return 0;
// }

// Binary to Decimal direct
// int main(){

//     int number =0b1111101000;
//     cout<<number;
// }

//Swap 2 numbers using bit operations:

// int main(){
//     int a;int b;
//     cin>>a>>b;
//     a^=b; // swap 2 numbers technique
//     b^=a;
//     a^=b;
//     cout<<a<<b;
//     return 0;
// }

//Reverse Bits

// long long int reverseBits(long long n){
//     // long long arr[32]={0};
//     // for(int i=0;i<32;i++){
//     //     arr[i]=n%2;
//     //     n=n/2;
//     // }
//     // for(int i=0;i<32;i++){
//     //     n=n+arr[i]*pow(2,31-i);
//     // }
//     // return n;

//     //OR

//     // long long ans=0;
//     // int index=31;
//     // while(n>0){
//     //     if(n%2==1){
//     //         ans=ans+pow(2,index);
//     //     }
//     //     index--;
//     //     n=n/2;
//     // }
//     // return ans;
// }

// int main(){
//     long long n=5;
//     cout<<reverseBits(n)<<endl;
//     return 0;
// }



// // Hamming distance
// int hammingDistance(int a, int b){
//     int pos=0;
//     long long arr1[32]={0};
//     long long arr2[32]={0};
//     for(int i=0;i<32;i++){
//         arr1[i]=a%2;arr2[i]=b%2;
//         a=a/2;
//         b=b/2;
//     }
//     for(int i=0;i<32;i++){
//         if(arr1[i]!=arr2[i]){
//             pos++;
//         }
//     }
//     return pos;
// }

// int main(){
//     long long n=100; long long m=99;
//     cout<<hammingDistance(n,m)<<endl;
//     return 0;
// }

// check if power of 2
// bool check(int a){
//     if(a==0){
//         return false;
//     }
//     else if((a & a-1)==0){
//         return true;
//     }else{
//         return false;
//     }
//  return false;

// //or in short
// bool check(int a){
// return(a && !(a&a-1));
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<check(n);
//     return 0;
// }


//Program to count the no of ones in binary no

//BY bit manipulation
// int countones(int n){
//     int count=0;
//     while(n!=0){
//         n=(n & n-1);
//         count++;
//     }
//     return count;
// }

// int main(){
//     int n=5;
//     cout<<countones(n);
//     return 0;
// }

// OR Brute force approach

// int countones(int n){
//     int x=1;
//     int count =0;
//     while(x<=n){
//         x*=2;
//     }
//     x/=2;
//     while(n>0){
//         int lastdig=n/x;
//         n=n-lastdig*x;
//         if(lastdig==1){
//             count++;
//         }
//         x=x/2;
//     }
//     return count;
// }

// int main(){
//     int n=5;
//     cout<<countones(n);
//     return 0;
// }

// All possible subsets

// void subset(int arr[],int n){
//     for(int i=0;i<(1<<n);i++){  // for the total number of the subsets
//         for(int j=0;j<n;j++){  //for the elements of the array
//             if(i&(1<<j)){
//                 cout<<arr[j]<<" ";
//             }
//         }cout<<endl;
//     }

// }

// int main(){
//     int arr[4]={1,2,3,4};
//     subset(arr,4);
//     return 0;
// }


// Counting bits : Given an integer n, return an array ans of legth n+1 such that for each i(0<=i<=n), ans[i] is the number of 1's in the binary representation of i.

// void count(int n){
//     int ans[n+1];
//     for(int i=0;i<=n;i++){
//         ans[i]=0;
//     }
//     for(int i=0;i<=n;i++){
//         ans[i]=__builtin_popcount(i);   // with the built in fuction to count the no 1's in the binary numbers
//     }                                   
//     for(int i=0;i<=n;i++){
//         cout<<ans[i]<<" ";
//     }
// }

// int main(){
//     int n=5;
//     count(n);
//     return 0;
// }



// Power of Four

// bool power(int n){
//     int unset_bits=0;
   
//     while(n){
//         if((n&1)==0){    // number of unset bits in power of 4 is always even
//             unset_bits++;  
//         }
//     n=n>>1;
//     }
//     if(unset_bits%2==0){
//         return true;
//     }
//     return false;
// }

// int main(){
//     long long n=128;
//     cout<<power(n);
//     return 0;
// }

//OR wihtout any loop implementation

// bool power(int n){
//     if((n&n-1)==0 && (n-1)%3==0){
//         return true;
//     }

//     return false;
// }

// int main(){
//     long long n=256;
//     cout<<power(n);
//     return 0;
// }
