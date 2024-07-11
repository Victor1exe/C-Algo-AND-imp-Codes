#include<bits/stdc++.h>
using namespace std;

int main(){
    /*//char arr[100]="apple"; // always ends with '\0'
    //int i=0;
    //while(arr[i] != '\0'){
    //    cout<<arr[i]<<endl;
     //   i++;
    //}

    char arr[100];
    cin>>arr;
    cout<<arr<<endl;

    //to access particular character 
    cout<<arr[0];
*/

    //To check palindrome

    /*int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;

 bool check =1;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[n-1-i]){
            check=1;
        }
        else{ 
            check=0;
            break;
        }
    }
    if(check==1){
        cout<<"A Palindrome";
    }else{
        cout<<"Not a Palindrome";
    }
   */

   /*int st=0; int ed=n-1;

    while(ed>=0){
        if(arr[st] == arr[ed])
        {
            continue;  // if using this approach how to solve this
        }
        else{
            cout<<"Not a palindrome";
            break;
        }
        st++;
        ed--;
    }
    if(ed==0){
        cout<<"It's a palindrome";
    } */


    //Largest word in a sentence //nice one
    int n;
    cin>>n;
    cin.ignore();

    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();

    int i=0;
   int maxLen=0,currLen=0;
   int st=0,maxst=0;
   while(1){
    if(arr[i]==' ' || arr[i]=='\0'){
        if(currLen>maxLen){
            maxLen=currLen;
            maxst=st;
        }
        currLen=0;
        st=i+1;
    }else{
    currLen++;}
    if(arr[i]=='\0'){
        break;
    }
    i++;
   }

    cout<<maxLen<<endl;
    for(int i=0;i<maxLen;i++){
        cout<<arr[i+maxst];
    }

    return 0;
}