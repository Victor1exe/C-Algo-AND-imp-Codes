#include <bits/stdc++.h>

using namespace std;

// int main()
// {
// int a=10;
// int b=50;
// int c=b>a?a-b:b+a;
// cout<<c;
// char ch='a';
// cout<<int(ch);

// for(int i=0;i<5;i++){
//     for(int j=0;j<=i;j++){
//         cout<<'*';
//     }cout<<endl;
// }

// int a=1;
// int n=5;

// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//        cout<<a;
//        a++;
//     }cout<<endl;
// }

// for(int i=n;i<0;i++){
//     if(n-i>0)
// }

// int n;
// cin>>n;

// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<'*';}
//      int spaces=2*n-2*i;
//     for(int j=1;j<=spaces;j++){
//             cout<<" ";}
//     for(int j=1;j<=i;j++){
//             cout<<"*";
//     }cout<<endl;}

// for(int i=n;i>0;i--){
//     for(int j=i;j>0;j--){
//          cout<<"*";
//     }
//     int spaces=2*n-2*i;
//     for(int j=spaces;j>0;j--){
//         cout<<" ";
//     }
//     for(int j=i;j>0;j--){
//         cout<<"*";
//     }cout<<endl;
// }

// int n=5;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         if((i+j)%2==0)
//         {
//             cout<<"1 ";
//         }
//         else{
//             cout<<"0 ";
//         }
//     }cout<<endl;
// }

// int n=5;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=n;j++){
//         cout<<"*";
//     }cout<<endl;
// }

// int n=5;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=i;j++){
//         cout<<j<<" ";
//     }cout<<endl;
// }

/*Palindrome problem*/

// int n=5;

// for(int i=1;i<=n;i++){
//     int j;
//     for(j=1;j<=n-i;j++){ //value of j ++ will be passed on
//         cout<<"  ";
//     }
//     int k=i;
//     for(;j<=n;j++){ //value of j ++ will be passed on
//         cout<<k--<<" ";
//     }
//     k=2;
//     for(;j<=n+i-1;j++){ //value of j ++ will be passed on
//         cout<<k++<<" ";
//     }cout<<endl;
// }

// int n=4;

// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=2*i-1;j++){
//         cout<<"*";
//     }cout<<endl;
// }

// for(int i=n;i>0;i--){
//      for(int j=1;j<=n-i;j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=2*i-1;j++){
//         cout<<"*";
//     }cout<<endl;
// }

/* For Zig-Zag pattern*/

// int n=9;
// for(int i=1;i<=3;i++){
//     for(int j=1;j<=n;j++){
//         if(((i+j)%4==0) || (i==2 && j%4==0)){
//             cout<<"*";
//         }else{
//             cout<<" ";
//         }
//     }cout<<endl;
// }

// int n;
// cin>>n;
// int ctch=0;

// for(int i=1;i<=n;i++){
//     if(n%i==0){
//         ctch++;
//     }
// }

// if(ctch==2){
//     cout<<"No. is a prime";
// }else{
//     cout<<"No. is not a prime";
// }

/*Prime Shortcut*/
// int n;
// cin>>n;
// bool flag=0;

// for(int i=2;i<sqrt(n);i++){
//      if(n%i==0){
//         cout<<"Not prime"<<endl;
//         flag=1;
//         break;
//      }}

//     if(flag==0)
//     cout<<"prime";

/*Reverse a number*/

// int n;
// cin>>n;

// int reverse=0;

// while(n>0){
//     int temp=n%10;
//     reverse=reverse*10+temp;
//     n=n/10;
// }

// cout<<reverse;

// Amrstrong number

// int n;
// cin >> n;
// int check = 0;
// int org = n;

// while (n > 0)
// {
//     int temp = n % 10;
//     check = check + round(pow(temp, 3));  // use of round fun
//     n = n / 10;
// }

// if (check==org)
// {
//     cout << "yes";
// }
// else
// {
//     cout << "no";
// }

// 0 1 1 2 3 5 8 13 21 34 55 ....

// void fibonacci(int n)
// {   int t1=0; int t2=1;
//     int nextterm=0;
//     for(int i=0;i<n;i++)
//     {
//         nextterm=t1+t2;
//         t1=t2;
//         t2=nextterm;
//     }
//     cout<<nextterm;
// }

// int main()
// {

//     int n;
//     cin >> n;
//     fibonacci(n);
//     return 0;
// }

// int fact(int n){
//     if(n==1){
//         return 1;
//     }
//     return n*fact(n-1);
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<fact(n);

//     return 0;
// }

// int fact(int n){
//     if(n==1||n==0){
//         return 1;
//     }
//     return n*fact(n-1);
// }

// int ncr(int n, int r){
//     int curr=fact(n)/(fact(n-r)*fact(r));
//     return curr;

// }

// int main(){
//     int n,r;
//     cin>>n>>r;
//     cout<<ncr(n,r);
//     return 0;
// }

/*
    1
    11
    121
    1331
    14641
*/

//    int fact(int n){
//      if(n==1||n==0){
//          return 1;
//      }
//      return n*fact(n-1);
// }

//    int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<fact(i)/(fact(i-j)*fact(j));
//         }cout<<endl;
//     }
//     return 0;
//    }

// Pythagorian Triplet:-

// void pythtriplet(int a,int b,int c){
//     int x=max(a,max(b,c));

//     if(x==a){
//         if((a*a)==(b*b)+(c*c))
//         {
//             cout<<"Yes";
//         }else{
//             cout<<"No";
//         }
//     }else if(x==b){
//          if((b*b)==(a*a)+(c*c))
//         {
//             cout<<"Yes";
//         }else{
//             cout<<"No";
//         }
//     }else{
//          if((c*c)==(a*a)+(b*b))
//         {
//             cout<<"Yes";
//         }else{
//             cout<<"No";
//         }
//     }

// }

// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;
//     pythtriplet(a,b,c);
//     return 0;
// }

// Linear Search

// int main(){

//     int arr[10]={1,2,3,4,5,6,7,8,9,-10};
//     int key;
//     cin>>key;
//     int flag=0;
//     for(int i=0;i<10;i++){
//         if(key==arr[i]){
//             cout<<"found ";
//             flag=1;
//             cout<<i+1;
//             break;
//         }
//     }
//     if(flag==0){
//         cout<<"Not found";
//     }
//     return 0;
// }

// binary search

// int main()
// {
//     int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
//     int a = 0;
//     int b = 9;
//     int mid = 0;
//     int key;
//     cin >> key;
//     for (int i = 0; i < 10; i++)
//     {
//         if (key == arr[a])
//         {
//             cout << a+1;
//             return 0;
//         }
//         else if (key == arr[b])
//         {
//             cout << b+1;
//             return 0;
//         }else{
//             mid=(a+b)/2;
//             if(arr[mid]==key){
//                 cout<<mid+1;
//                 return 0;
//             }
//             else{
//                 if(arr[mid]>key){
//                     b=mid-1;
//                 }else{
//                     a=mid+1;
//                 }
//             }
//             if(a>b){
//                 cout<<"Not found";
//                 break;
//             }
//         }
//     }
//     return 0;
// }

// Sorting arrays:-

// selection sort

// int main(){
//     int arr[10]={4,-6,45,10,14,110,49,0,300,15};  // 
//     for(int i=0;i<9;i++){
//         for(int j=i+1;j<10;j++){
//             if(arr[j]<arr[i]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }

//     for(int i=0;i<10;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// Bubble sort

// int main()
// {
//     int arr[10] = {4, -6, 45, 10, 14, 110, 49, 0, 300, 15};  // memorise by n-1 iterations // last element gets sorted
//     int n;
//     cin >> n;
//     int counter = 1;
//     while (counter < n)
//     {
//         for (int i = 0; i <n-counter; i++)
//         {
//             if (arr[i] > arr[i + 1])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[i + 1];
//                 arr[i + 1] = temp;
//             }
//         }
//         counter++;
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// Insertion sort

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[10] = {4, -6, 45, 10, 14, 110, 49, 0, 300, 15};

  
    // for(int i=1;i<n;i++){
    //     int curr=arr[i];
    //     int j=i-1;
    //     while(j>=0 && arr[j]>curr){
    //         int temp=arr[j];
    //         arr[j]=arr[j+1];
    //         arr[j+1]=temp;
    //         j--;
    //     }
    // }

//     for (int i = 0; i < 10; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// int main(){
//     int arr[10]={15,46,4,3,2,5,6,6,543,1000};
//     int maximum=-199999;
//     for(int i=0;i<9;i++){

//                 maximum=max(arr[i],arr[i+1]);

//     }
//     cout<<maximum;
//     return 0;
// }

// int main(){
//     int arr[10]={15,46,4,3,2,5,6,6,543,100};
//     int temp=-199999;
//     for(int i=0;i<9;i++){
//         if(arr[i+1]>arr[i]){
//             temp=arr[i+1];
//         }
//     }
//     cout<<temp;
//     return 0;
// }

// sum of all possible numbers

// int main(){
//     int result=0;
//     int arr[3]={1,2,3};
//     for(int i=0;i<3;i++){
//         int sum=0;
//         for(int j=i;j<3;j++){
//                 sum=sum+arr[j];
//                 result+=sum;
//        }
//     }
//     cout<<result;
//     return 0;
// }

// Longest arithematic subarray

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     int count=2;
//     int curr=2;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=i;j<n-2;j++){
//             if((arr[j+1]-arr[j])==(arr[j+2]-arr[j+1]))
//             {
//                 curr++;
//             }else{
//                 curr=2;
//             }
//             count=max(curr,count);
//         }
//     }
//     cout<<count;
//     return 0;
// }

// Record Breaker

// int main(){
//     int n;
//     cin>>n;
//     int mx=-1;
//     int record=0;
//     int arr[n+1];
//     arr[n]=-1;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         if(arr[i]>arr[i+1] && arr[i]>mx){
//             record++;
//         }
//         mx=max(mx,arr[i]);
//     }
//     cout<<record;
//     return 0;
// }

// First repeating   // Doubt in second approach

// int main()
// {
//     int n;
//     int mn = 999999;

//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 mn = min(mn, i);
//             }
//         }
//     }
//     cout << mn;
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     const int N=1e6+2;
//     int idx[N];

//     for(int i=0;i<N;i++){
//         idx[i]=-1;
//     }

//     int minidx=INT_MAX;

//     for(int i=0;i<n;i++){
//         if(idx[a[i]] != -1){
//             minidx=min(minidx,idx[a[i]]);
//         }
//         else{idx[a[i]]=i;}
//     }

//     if(minidx==INT_MAX){
//         cout<<-1;
//     }else{cout<<minidx+1;}

//     return 0;
// }

// Subarray with given sum
// brute force
// int main()
// {
//     int n;
//     cin >> n;
//     int sum;
//     cin >> sum;
//     int arr[n];
//     int start=0;int end=0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {   int currsum=0;
//         for (int j = i; j < n; j++)
//         {
//             if (currsum == sum)
//             {
//                 start=i;
//                 end=--j;
//                 break;
//             }
//             else{
//                 currsum=currsum+arr[j];
//             }
//         }
//     }

//     cout<<start<<" "<<end<<endl;
//     return 0;
// }

// Optimal way

// int main()
// {
//     int n;
//     cin >> n;
//     int sum = 12;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int currsum = 0;
//     int st = -1, en = -1;
//     int i = 0, j = 0;
//     while(j<n){
//         currsum+=arr[j];
//         while(currsum>sum){
//             currsum=currsum-arr[i];
//             i++;
//         }
//         if(sum==currsum){
//             st=i+1;
//             en=j+1;
//             break;
//         }
//         j++;
//     }

//     cout<<st<<" "<<en;

//     return 0;
// }

// Smallest positive missing number     // Doubt

// int main(){

//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     const int N=1e6+2;
//     int aR[N];
//     for(int i=0;i<N;i++){
//         aR[i]=-1;
//     }
//     int ans=-1;
//     for(int i=0;i<n;i++){
//         if(arr[i]>0){
//             aR[arr[i]]=1;
//         }
//     }
//     for(int i=0;i<N;i++){
//         if(aR[i]==-1){
//             ans=i;
//             break;
//         }
//     }
//     cout<<ans<<endl;

//     return 0;
// }

// Subarray with maximum sum

// int main(){

//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int sum=0;

//     for(int i=0;i<n;i++){
//         int currsum=0;
//         for(int j=i;j<n;j++){
//             currsum=currsum+arr[j];
//             sum=max(currsum,sum);
//         }
//     }
//     cout<<sum;
//     return 0;
// }

// Optimal { Kadane's approach}

// int main(){

//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int sum=INT_MIN;
//     int currentsum=0;

//     for(int i=0;i<n;i++){
//         currentsum+=arr[i];
//         if(currentsum<0){
//             currentsum=0;
//         }
//         sum=max(sum,currentsum);

//     }
//     cout<<sum;
//     return 0;
// }

// Maximum circular subarray sum

// int kadane(int arr[], int n)
// {
//     int sum = INT_MIN;
//     int currentsum = 0;

//     for (int i = 0; i < n; i++)
//     {
//         currentsum += arr[i];
//         if (currentsum < 0)
//         {
//             currentsum = 0;
//         }
//         sum = max(sum, currentsum);
//     }
//     return sum;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int maxsum = 0;
//     int nonwrapsum = kadane(arr, n);
//     int wrapsum;
//     int totalsum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         totalsum += arr[i];
//         arr[i] = -arr[i];
//     }
//     int noncontb = kadane(arr, n);

//     wrapsum = totalsum - (-noncontb);

//     maxsum = max(wrapsum, nonwrapsum);
//     cout << maxsum;

//     return 0;
// }

//     return 0;
// }

// print an array in reverse order

// void printArray(int ans[], int n) {
//   cout << "The reversed array is:- " << endl;
//    for (int i = 0; i < n; i++) {
//       cout << ans[i] << " ";
//    }
// }

// void reverseArray(int arr[], int n)
// {
//     int ans[5];
//    for(int i=0;i<n;i++){
//         ans[n-i-1]=arr[i];
//    }
//    printArray(ans,n);
// }


// int main()
// {
//     int arr[5]={1,2,3,4,5};
//     int n=5;
//     reverseArray(arr,n);
//     return 0;
// }

// OR recursive way

// void print(int arr[],int n){
//     if(n==0){
//         return;
//     }
//     cout<<arr[n-1]<<" ";
//     print(arr,n-1);
// }

// int main(){
//     int n=15;
//     int arr[n];
//     for(int i=0;i<15;i++){
//         cin>>arr[i];
//     }
//     print(arr,n);
//     return 0;
// }

// Check Palindrome

// void palindrome(string& s,int n){
//     bool check=false;
//     for(int i=0;i<=n/2;i++){
//         if(s[i]!=s[n-i-1]){
//             cout<<"false";
//             break;
//         }else{
//             check=true;
//         }
//     }
//     if(check==true){
//             cout<<"true";
//         }
// }

// int main(){

//     string s="nitin";
//     palindrome(s,5);
//     return 0;
// }

// OR Recursively

// void checkpalindrome(string &s,int i,int j){
//         if(i>j){
//             cout<<"true";
//             return;
//         }
//         if(s[i]!=s[j]){
//             cout<<"false";
//             return;
//         }
//         checkpalindrome(s,i+1,j-1);
// }

// int main(){
//     string s="saippuakivikauppias";
//     checkpalindrome(s,0,18);
//     return 0;
// }


// Hashing  --> prestoring and fetching

// Number hashing
// 5
// 1 3 2 1 3
// 5
// 1 4 2 3 12

// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>> arr[i];
//     }

//     // pre compute

//     int hash[13]={0};
//     for(int i=0;i<n;i++){
//         hash[arr[i]]++;
//     }

//     // fetch

//     int q;
//     cin>>q;
//     while(q--){
//         int number;
//         cin>>number;

//         cout<<hash[number]<<endl;
//     }
//     return 0;
// }


//  Using vector  


// void countFreq(int arr[], int n)
// {
//     vector<bool> visited(n, false);
 
//     for (int i = 0; i < n; i++) {
 
//         // Skip this element if already processed
//         if (visited[i] == true)
//             continue;
 
//         // Count frequency
//         int count = 1;
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] == arr[j]) {
//                 visited[j] = true;
//                 count++;
//             }
//         }
//         cout << arr[i] << "-->" << count << endl;
//     }
// }
 
// int main(){
//      int arr[] = {10,5,10,15,10,5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     countFreq(arr, n);
//     return 0;
// }


// Using map

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     unordered_map<int,int> mpp;
//     for(int i=0;i<n;i++){
//         mpp[arr[i]]++;
//     }

//     for(auto it: mpp){
//         cout<<it.first<<"-->"<<it.second<<endl;
//     }
    

//     return 0;
// }


/*

NOTE

inside main we can declare an int array of maximum size 10^6
globally an int array of maximum size 10^7 can be declared

whereas if we declare a bool array inside main 10^7 and globally 10^8

*/

// For hashing array of size 10^8 or more
/*
7
1 2 3 1 3 2 12
5
1 2 3 4 12
*/


// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     // pre compute

//     map<int,int> mpp;
//     for(int i=0;i<n;i++){
//         mpp[arr[i]]++;
//     }

//     // //iterate in the map
//     // for(auto it : mpp){
//     //     cout<<it.first<<"-->"<<it.second<<endl;
//     // }

//     int q;
//     cin>>q;
//     while(q--){
//         int number;
//         cin>>number;
//         // fetch
//         cout<<mpp[number]<<" ";
//     }

//     return 0;
// }


// Character hashing
// abcdabehf
// 5
// a
// g
// h
// b
// c

// for lower case use ch-'a'
// for upper case use ch-'A'
// for all characters simply ch

// int main(){
//     string s;
//     cin>>s;

//     // pre compute

//     int hash[256]={0};
//     for(int i=0;i<s.size();i++){
//         hash[s[i]]++;
//     }

//     //fetch

//     int q;
//     cin>>q;
//     while(q--){
//         char c;
//         cin>>c;
//         cout<<hash[c]<<" ";
//     }

//     return 0;

// }

/*
ordered map

storing & fetching ==> O(logn)

unordered map  *prefer it*

storing & fetching ==> average and best case O(1)
                        worst case O(n)

*/





