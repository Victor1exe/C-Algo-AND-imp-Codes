#include<bits/stdc++.h>
using namespace std;

//GCD
// int gcd(int a,int b){

//     int result=min(a,b);

//     while(result>0){
//         if(a%result==0 && b%result==0) break;
//         result--;
//     }
//     return result;
//     }

//By recursion

// int GCD(int a,int b){
//     if(a==b)return a;
//     if(a==0) return b;
//     if(b==0) return a;

//     if(a>b) return GCD(a-b,b);
//     return GCD(a,b-a);
// }

//  Prime

// bool prime(int n){
//     int cnt=0;
//     for(int i=1;i*i<n;i++){
//         if(n%i==0){cnt++;
//         if(n%i!=i){
//             cnt++;
//         }
//      }
//     }
//     if(cnt==2) return true;
//     return false;
// }

// //Prime factorization

// void primefactor(int N){
    
//     for(int i=1;i*i<N;i++){
//         if(N%i==0){
//             if(prime(i)) cout<<i<<" ";
//             if(N%i!=i){
//                 if(prime(N/i)) cout<<N/i<<" ";
//             }
//         }
//     }
// }

//optimal way to find primefactors

// int main(){
//     int a=120;
//     for(int i=2;i*i<=a;i++){
//         if(a%i==0){
//             cout<<i<<" ";
//             while(a%i==0) {
//                 a=a/i;
//             }
//         }
//     }
//     if(a!=1) cout<<a<<" ";

//     return 0;
// }

// //LCM
// int GCD(int a,int b){
//     int result=min(a,b);
//     while(result>0){
//         if(a%result==0 && b%result==0){
//             break;
//         }
//         result--;
//     }
//     return result;
// }

// int LCM(int a,int b){
//     return (a*b)/GCD(a,b);
// }

// int main(){
//     int a=64;int b=15;
//     cout<<LCM(a,b);   
//     return 0;
// }


// // Missing elements in array and it's followups
// bool fibonacci(int N){
//     int a=0;int b=1;
//     int c=0;
//     while(true){
//         c=a+b;
//         a=b;
//         b=c;
//         if(c==N) return true;
//         if(c>N) return false;
//     }
// }

// bool prime(int n){
//     int cnt=0;
//     for(int i=1;i*i<=n;i++){
//         if(n%i==0){
//             cnt++;
//             if(n/i!=i){cnt++;}
//         }
//     }
//     if(cnt==2) return true;
//     return false;
// }


// int main(){
//     vector<int> arr={-3,17,5,-2,1};
//     int n=arr.size();
//     sort(arr.begin(),arr.end());
//     int min=arr[0];
//     int max=arr[n-1];
//     map<int,int> mpp;
//     for(int i=min;i<=max;i++){
//         mpp[i]=0;
//     }
//     for(int i=0;i<n;i++){
//         mpp[arr[i]]=1;
//     }
//     vector<int> ans;
//     for(int i=min;i<=max;i++){
//         if(mpp[i]==0){
//             ans.push_back(i);
//         }
//     }
//     // for(int i=0;i<ans.size();i++){
//     //     cout<<ans[i]<<" ";
//     // }
//     vector<int> primes;
//     for(int i=0;i<ans.size();i++){
//         if(prime(ans[i])){
//             primes.push_back(ans[i]);
//             }
//     }
//     //  for(int i=0;i<primes.size();i++){
//     //     cout<<primes[i]<<" ";
//     // }
//     vector<int> fibo;
//      for(int i=0;i<primes.size();i++){
//         if(fibonacci(primes[i])){
//             fibo.push_back(primes[i]);
//         }
//     }
//     for(int i=0;i<fibo.size();i++){
//         cout<<fibo[i]<<" ";
//     }
//     return 0;
// }


















































