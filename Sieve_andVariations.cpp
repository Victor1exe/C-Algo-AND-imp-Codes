#include<bits/stdc++.h>
using namespace std;

// // Sieve of Eratosthenes
// void primesieve(int n){
//     int prime[100]={0}; // Marking all
    
//     for(int i=2;i<=n;i++){
//         if(prime[i]==0){
//             for(int j=i*i;j<=n;j=j+i){
//                 prime[j]=i; //removing the non-primes
//             }
//         }
//     }
//     for(int i=2;i<=n;i++){
//         if(prime[i]==0){
//             cout<<i<<" ";
//         }
//     }
// }

// int main(){
//     int n=50;
//     primesieve(n);
//     return 0;
// }


// Prime Factorisation using sieve

// void primeFactor(int n){
//     int spf[100]={0};

//     for(int i=2;i<=n;i++){
//         spf[i]=i; // Marking all 
//     }

//     for(int i=2;i<=n;i++){
//         if(spf[i]==i){
//             for(int j=i*i;j<=n;j=j+i){
//                 if(spf[j]==j){
//                     spf[j]=i;  // Making the array full of primes
//                 }
//             }
//         }
//     }

//     while(n!=1){
//         cout<<spf[n]<<" ";
//         n=n/spf[n];
//     }

// }

// int main(){
//     int n=99;
//     primeFactor(n);
//     return 0;
// }