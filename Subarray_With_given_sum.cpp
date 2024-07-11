/*
Brute Force Approach:
Find the sum of all possible subarrays.If any of the sum is equal to S, output the startig and the ending index of the subarray 
Time Complexity=O(n^2)
*/
/* According to the brute force approach:
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
            cin>>a[i];
        }
    int S; int Sum;
     cin>>S;
     for(int i=0;i<n;i++){
        Sum=0;
        for(int j=i;j<n;j++){
            Sum=Sum+a[j];
            if(S==Sum){
                cout<<i+1<<":"<<j+1<<endl;
                return 0;
            }
        }
     }

    
    return 0;
}*/

/*
Optimized Approach:
Keep 2 pointers st and en and a variable currSum sum from st to en;
increment en until cuurSum+a[en]>S;
Start increasing until currSum<=S;
Time complexity O(n)
*/

#include<bits/stdc++.h>

using namespace std;

int main(){
int n,S;
cin>>n>>S;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int i=0;int j=0; int st=-1; int en=-1; int sum=0;

while(j<n){  // Doubt in approach
 sum+=a[j];
 while(sum>S){
    sum-=a[i];
    i++;
 }
 if(sum==S){
    st=i+1;
    en=j+1;
    break;
 }
 j++;
}
cout<<st<<" "<<en<<endl;
return 0;
}
