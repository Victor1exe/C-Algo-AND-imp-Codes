#include <bits/stdc++.h>
#include <string.h>
using namespace std;

// int dataTypesize(string s){
//     if(s=="Integer"){
//         return 4;
//     }else if(s=="Character"){
//         return 1;
//     }
//     else if(s=="Long"){
//         return 8;
//     }else if(s=="Float"){
//         return 4;
//     }else if(s=="Double")
//     {
//         return 8;
//     }else{
//         cout<<"Invalid";
//     }
//     return 0;
// }
// int main(){
//     string s;
//     cin>>s;
//     cout<<dataTypesize(s);
//     return 0;
// }

// string comapreNM(int n,int m){
//     if(n>m){
//         cout<<"greater";
//     }else if(n<m){
//         cout<<"lesser";
//     }else{
//         cout<<"equal";
//     }
//     return "";
// }

//     int main(){
//         int n,m;
//         cin>>n>>m;
//         comapreNM(n,m);
//         return 0;
//     }

// int main(){
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<i<<" ";
//         }cout<<endl;
//     }
// }

int main()
{

    // int n = 5;
    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // int n = 5;
    // int k=1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << k++;
    //     }
    //     cout << endl;
    // }
    //
    //     int n=5;
    //   for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=2*i-1;j++){
    //         cout<<"*";
    //     }cout<<endl;}
    // for(int i=n;i>=1;i--){
    //     for(int j=1;j<=n-i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=2*i-1;j++){
    //         cout<<"*";
    //     }cout<<endl;}

    // int n=5;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }cout<<endl;
    // }
    // for(int i=n-1;i>=1;i--){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }cout<<endl;
    // }

    // 1      1
    // 12    21
    // 123  321
    // 12344321

    // int n;
    // n = 4;
    // for (int i = 1; i <= n; i++)
    // {
    //     int k = 1;
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << k++;
    //     }
    //     for (int j = 1; j <= 2 * n - 2 * i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i; j++){
    //         cout<<--k;
    //     }cout<<endl;
    // }

    // int n=5;
    // for(int i=1;i<=n;i++){char a='A';
    //     for(int j=1;j<=i;j++){
    //         cout<<char(a++);
    //     }cout<<endl;
    // }

    //    int n=5;
    // for(int i=n;i>=1;i--){char a='A';
    //     for(int j=1;j<=i;j++){
    //         cout<<char(a++);
    //     }cout<<endl;
    // }

    // int n=5; char a='A';
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<char(a);
    //     }a++;
    //     cout<<endl;
    // }

    //    A
    //   ABA
    //  ABCBA
    // ABCDCBA

    // int n=4;
    // for(int i=1;i<=n;i++){

    //     for(int j=1;j<=n-i;j++){
    //         cout<<" ";
    //     }
    //     char a='A';
    //     int j;
    //     for( j=1;j<=i;j++){
    //         cout<<a++;
    //     }
    //     for(j=1;j<=i-1;j++){
    //         cout<<char(a-2);
    //         a--;
    //     }cout<<endl;
    // }

    // Alternative and a good approach to above question:-

    // int n=4;
    // for(int i=0;i<n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout<<" ";
    //     }
    //     char ch='A';
    //     int breakpoint=(2*i+1)/2;
    //     for(int j=1;j<=2*i+1;j++){
    //         cout<<ch;
    //         if(j<=breakpoint) ch++;
    //         else ch--;
    //     }cout<<endl;
    // }

    // E
    // DE
    // CDE
    // BCDE
    // ABCDE

    // int n = 5;

    // for (int i = 0; i < n; i++)
    // {

    //     for(char ch=('A'+n-1)-i;ch<=('A'+n-1);ch++){
    //         cout<<ch;
    //     }

    //     cout << endl;
    // }

    // **********
    // ****  ****
    // ***    ***
    // **      **
    // *        *
    // *        *
    // **      **
    // ***    ***
    // ****  ****
    // **********

    // int main(){
    //     int n=5;
    //     for(int i=1;i<=n;i++){
    //         for(int j=n-i+1;j>=1;j--){
    //             cout<<"*";
    //         }
    //         for(int j=1;j<=2*i-2;j++){
    //             cout<<" ";
    //         }
    //         for(int j=n-i+1;j>=1;j--){
    //             cout<<"*";
    //         }cout<<endl;
    //     }
    //     for(int i=1;i<=n;i++){
    //         for(int j=1;j<=i;j++){
    //             cout<<"*";
    //         }
    //         for(int j=1;j<=2*n-2*i;j++){
    //             cout<<" ";
    //         }
    //         for(int j=1;j<=i;j++){
    //             cout<<"*";
    //         }cout<<endl;
    //     }

    // *        *
    // **      **
    // ***    ***
    // ****  ****
    // **********
    // ****  ****
    // ***    ***
    // **      **
    // *        *

    // int main()
    // {
    //     int n = 5;
    //     for (int i = 1; i <= n; i++)
    //     {
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << "*";
    //         }
    //         for (int j = 1; j <= 2 * n - 2 * i; j++)
    //         {
    //             cout << " ";
    //         }
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << "*";
    //         }
    //         cout << endl;
    //     }
    //     int k = 4;
    //     for (int i = 1; i <= k; i++)
    //     {
    //         for (int j = 1; j <= k - i + 1; j++)
    //         {
    //             cout << "*";
    //         }
    //         for (int j = 1; j <= 2 * i; j++)
    //         {
    //             cout << " ";
    //         }

    //         for (int j = 1; j <= k - i + 1; j++)
    //         {
    //             cout << "*";
    //         }
    //         cout << endl;
    //     }

    //     return 0;
    // }

    // ******
    // *    *
    // *    *
    // *    *
    // *    *
    // ******

    // int n=6;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(i==0||i==n-1){
    //             cout<<"*";
    //         }
    //         else if(j==0 || j==n-1){
    //             cout<<"*";
    //         }else{
    //             cout<<" ";
    //         }
    //     }cout<<endl;
    // }

    // 4444444  
    // 4333334
    // 4322234
    // 4321234
    // 4322234
    // 4333334
    // 4444444

    // // Remember the distance from all sides  


    // int n=4;
    // for(int i=0;i<2*n-1;i++){
    //     for(int j=0;j<2*n-1;j++){
    //         int top=i;
    //         int left=j;
    //         int bottom=(2*n-2)-i;
    //         int right=(2*n-2)-j;
    //         cout<<(n-min(min(top,bottom),min(left,right)));
    //     }cout<<endl;
    // }

    
    


    return 0;
}
