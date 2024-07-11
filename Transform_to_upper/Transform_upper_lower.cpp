#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    /*
    //string str="abcsjhkdsjh";

    //for upper case and lower case Remember: a-A=32;
    //for upper case
    for(int i=0;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
    }

    string str="ABSDKDSKKDFSH";
    //for lower case{
        
      for(int i=0;i<str.size();i++){
        if(str[i]>='A' && str[i]<='Z'){
             str[i]=str[i]+32;
        }
    }


    cout<<str<<endl;
    */

   //Function for the upper case and lower case

   string s="Bamboo";

   transform(s.begin(),s.end(),s.begin(), ::toupper);
   cout<<s<<endl;
    transform(s.begin(),s.end(),s.begin(), ::tolower);
   cout<<s<<endl;
    
    return 0;
}