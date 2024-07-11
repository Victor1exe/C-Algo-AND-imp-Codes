#include<bits/stdc++.h>
using namespace std;

int kadane(int arr[],int n){
    int Currsum=0;
    int Sum=-19999999;
    for(int i=0;i<n;i++){
        Currsum=Currsum+arr[i];
        if(Currsum<0){
            Currsum=0;
        }
        Sum=max(Sum,Currsum);
    }
return Sum;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
/*
Wrap sum 
non-wrap sum
To find the non-contributing element in the wrap sum:
alter the sign of the elements i=of the array and apply the Kadane's algorithm on it and it will give the non-contributing element as resultant sum 
Max Subarray Sum= Total sum of array - Sum of non-contributing elements
*/

int wrapsum;
int nonwrapsum;

nonwrapsum=kadane(arr,n);
int totalsum=0;
for(int i=0;i<n;i++){
    totalsum+=arr[i]; // not understood
    arr[i]=-arr[i];
}

wrapsum = totalsum + kadane(arr,n); // the negative of kadane will be subtracted which intends to make -(-kadane) = +
cout<<max(wrapsum,nonwrapsum)<<endl;
    return 0;
}  