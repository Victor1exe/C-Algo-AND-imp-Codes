#include<bits/stdc++.h>
using namespace std;

//Sum till n

    // int Sum(int n){
    //     if(n==0){
    //         return 0;
    //     }

    //     int prevsum=Sum(n-1);
    //     return n+prevsum;
    // }

    // int main(){
    //     int n=100;
    //     cout<<Sum(n)<<endl;
    //     return 0;
    // }

//Calculate n raised to the power p

    // int power(int n, int p){
    //     if(p==0){
    //         return 1;
    //     }
    //     int res=power(n,p-1);
    //     return n*res;
    // }

    // int main(){
    //     int a=16; int b=4;
    //     cout<<power(a,b)<<endl;
    //     return 0;
    // }

// factorial of n

    // int factorial(int n){
    //     if(n==0){
    //         return 1;
    //     }
    //     int fact=factorial(n-1);
    //     return n*fact;
    // }

    // int main(){
    //     int n=10;
    //     cout<<factorial(n)<<endl;
    //     return 0;
    // }


// Nth fibonacci number 

//     int Fibo(int n){
//         if(n==0 || n==1){
//             return n;
//         }
//         return Fibo(n-1)+Fibo(n-2);
//     }

//     int main(){
//     int n=5;
//     cout<<Fibo(n);
//     return 0;
// }

// Print numbers in increasing or decreasing order

// void dec(int n){
//     if(n==1){
//         cout<<"1"<<" "; 
//         return;
//     }
//     cout<<n<<" ";
//     dec(n-1);
// }

// void inc(int n){
//     if(n==1){
//         cout<<"1"<<" ";
//         return;
//     }
//     inc(n-1);
//     cout<<n<<" ";   
// }

// int main(){
//     int n=10;
//     inc(n);
//     dec(n);
//     return 0;
// }


// Check if array is sorted or not

    // bool checkSort(int arr[], int n){
    //     if(n==1){
    //         return true;
    //     }
    //     bool restArr=checkSort(arr+1,n-1);
    //     if(arr[0]<arr[1] && restArr){
    //         return true;
    //     }
    //     else{
    //         return false;
    //     }
    // }

    // int main(){
    // int arr[]={1,2,3,4,5,7};
    // cout<<checkSort(arr,6);
    // return 0;
    // }


// // First and last occurance of a number in an array

// int firstocc(int arr[],int n,int i,int key){
//     if(i==n){
//         return -1;
//     }
//     if(arr[i]==key){
//         return i;
//     }
//     return firstocc(arr,n,i+1,key);
// }

// int lastocc(int arr[],int n,int i,int key){
//     if(i==n){
//         return -1;
//     }
//     int restarr=lastocc(arr,n,i+1,key);
//     if(restarr!=-1){
//         return restarr; 
//     }
//     if(arr[i]==key){
//         return i;
//     }
//     return -1;
// }

// int main(){
//     int arr[]={4,2,1,2,5,2,7};
//     cout<<firstocc(arr,7,0,2)<<endl;
//     cout<<lastocc(arr,7,0,2)<<endl;
//     return 0;
// }

// Reverse a string using recursion
// void reverse(string s){
//     if(s.length()==0){
//         return;
//     }
//     string ros=s.substr(1);
//     reverse(ros);
//     cout<<s[0];
// }

// int main(){
//     string s="binod";
//     reverse(s);
//     return 0;
// }


// Replace pi with 3.14 in string 

// void replace(string s){
//     if(s.length()==0){
//         return;
//     }

//     if(s[0]=='p' && s[1]=='i'){
//         cout<<"3.14";
//         replace(s.substr(2));
//     }else{
//         cout<<s[0];
//         replace(s.substr(1));
//     }
// }

// int main(){
//     string s="pippxxppixpi";
//     replace(s);
//     return 0;
// }

// Tower of hanoi 

// void toh(int n,char src, char dest, char helper){
//     if(n==0){
//         return;
//     }
//     toh(n-1,src,helper,dest);
//     cout<<"Move from "<<src<<" to "<<dest<<endl;
//     toh(n-1,helper,dest,src);
// }

// int main(){
//     toh(3,'A','C','B');
//     return 0;
// }

// Removes dulicates from the string

// void duplicate(string s){
//     if(s.length()==0){
//         return;
//     }
//     char c=s[0];
    
//     if(s[1]==c){
//         cout<<"";
//     }else{
//         cout<<s[0];
//     }
//     duplicate(s.substr(1));
// }

// int main(){
//     string s="aaaabbbeeecdddd";
//     duplicate(s);
//     return 0;
// }

//OR

// string remduplicate(string s){
//     if(s.length()==0){
//         return "";
//     }

//     char ch=s[0];
//     string ans=remduplicate(s.substr(1));

//     if(ch==ans[0]){
//         return ans;
//     }
//     return ch+ans;
// }

// int main(){
//     string s ="aaaabbbeeecdddd";
//     cout<<remduplicate(s);
//     return 0;
// }


// Move all x to the end

// string move(string s){
//     if(s.length()==0){
//         return "";
//     }
//     char ch=s[0];
//     string ans=move(s.substr(1));
//     if(ch=='x'){
//         return ans+ch;
//     }
//     return ch+ans;
// }

// int main(){
//     string s="axxbdxcefxhix";
//     cout<<move(s);
//     return 0;
// }


// Generate all the substrings of a string

// void generate(string s,string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }

//     char ch=s[0];
//     string ros=s.substr(1);

//     generate(ros,ans);
//     generate(ros,ans+ch);
// }

// int main(){
//     generate("ABC","");
//     return 0;
// }


// Generate all substrings with ASCII value

// void subseq(string s, string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }

//     char ch=s[0];
//     int code=ch;
//     string ros=s.substr(1);

//     subseq(ros,ans);
//     subseq(ros,ans+ch);
//     subseq(ros,ans+to_string(code));
// }

// int main(){
//     string s="AB";
//     subseq(s,"");
//     return 0;
// }

// Print all possible words from phone digits

// string phone[]={"","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

// void pwords(string s, string ans){
    
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }

//     char ch=s[0];
//     string code=phone[ch-'0'];
//     string ros=s.substr(1);
    
//     for(int i=0;i<code.length();i++){
//         pwords(ros,ans+code[i]);
//     }

// }

// int main(){
//     pwords("23","");
//     return 0;
// }



#include<bits/stdc++.h>

using namespace std;

bool check(int arr[],int n){
    if(n==1){
        return true;
    }
    bool ans=check(arr+1,n-1);
    if(arr[0]<arr[1] && check){
        return true;
    }
    else{
        return false;
    }
}


int main(){
    int arr[]={1,2,3,4,5,6,7};
    cout<<check(arr,6);
    return 0;
}