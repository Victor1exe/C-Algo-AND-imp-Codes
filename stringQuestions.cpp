#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
   /*
   //form the largest numeric string from the given string

    string s1="6732812";
   // sort(s1.begin(),s1.end());
    //for(int i=s1.size();i>=0;i--){
      // cout<<s1[i];
   // }
   sort(s1.begin(),s1.end(),greater<int>()); //or use this methord
   cout<<s1;
   */


//Largest occuring charater
  string s1="afjeruiqirirjaehfoffffwepaov";

  int freq[26];
                              //nice problem
  for(int i=0;i<26;i++){
    freq[i]=0;
  }

  for(int i=0;i<s1.size();i++){
    freq[s1[i]-'a']++;
  }

  char ans='a';
  int maxf=0;
  for(int i=0;i<26;i++){
    if(freq[i]>maxf){
      maxf=freq[i];
      ans='a'+i;
    }
  }

  cout<<maxf<<" "<<ans<<endl;


    return 0;
}