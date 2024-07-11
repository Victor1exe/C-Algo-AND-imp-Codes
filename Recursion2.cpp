#include<bits/stdc++.h>
using namespace std;


// Print all possible permutation of a string:

// void permutation(string s, string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }

//     for(int i=0;i<s.length();i++){
//         char ch=s[i];
//         string ros=s.substr(0,i)+s.substr(i+1);
//         permutation(ros,ans+ch);
//     }
// }

// int main(){
//     string s="ABC";
//     permutation(s,"");
//     return 0;
// }


// Count the number of paths possible from start point to end point in gameboard

// int countPath(int s, int e){

//     if(s==e){
//         return 1;
//     }

//     if(s>e){
//         return 0;
//     }

//     int count=0;
//     for(int i=1;i<=6;i++){
//         count+=countPath(s+i,e);
//     }

//     return count;
// }

// int main(){
//     int s=0;int e=3;
//     cout<<countPath(s,e);
//     return 0;
// }


// Count the number of path possible in a maze

// int countpath(int n, int i, int j){
//     if(i==(n-1)&&j==(n-1)){
//         return 1;
//     }
//     if(i>=n || j>=n){
//         return 0;
//     }
//     return countpath(n,i+1,j)+countpath(n,i,j+1);
// }

// int main(){
//     cout<<countpath(3,0,0);
//     return 0;
// }
