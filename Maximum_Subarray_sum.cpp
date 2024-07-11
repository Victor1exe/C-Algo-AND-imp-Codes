#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   /*int Sum=-1;     // Time complexity is O(n^2);
    for(int i=0;i<n;i++){int cSum=0;
        for(int j=i;j<n;j++){
            cSum=cSum+a[j];
            Sum=max(Sum,cSum);
        }
    }
    cout<<Sum<<endl;*/ 
   
    /*
    It can be further more optimised to the complexity of O(n);
    By using Kadane's Algorithm:
    We will form a variable CurrentSum that will store the value sum of elements to a point;
    NOTE:CurentSum will be updated regularly such that it takes only those elements in the sub array that will grant maximum sum
    We will calculate the sum upto that point the sum doesn't becomes a neg. value;
    If it tends to be a neg. value update the CurrentSum as 0 and that means we don't to include the elemnts that lead to the CurrentSum to and
    will traverse further the array.
    */
   int CurrSum=a[0];int Sum=-1999999;
    for(int i=1;i<n;i++){
        CurrSum=CurrSum+a[i];
        if(CurrSum<0){
            CurrSum=0;
        }
        Sum=max(Sum,CurrSum);
    }
    cout<<Sum<<endl;
    return 0;
}