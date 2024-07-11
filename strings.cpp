#include<iostream>
#include<string>
#include<algorithm>


using namespace std;

int main(){
   /*
   //Declaration of strings:
    string str;
    string str1="Ghodaechitae";
    //string str2=(6,'p'); Not working
    cin>>str;
    cout<<str;
    cout<<str1;
   // cout<<str2;
   */
  
  /*
  //Taking input in the strings with spaces:
  string str;
  getline(cin, str);
  cout<<str<<endl;
  */
  
  /**/
  //Functions in strings

  /*string s1="fam";
    string s2="ily"; 
    s1.append(s2);
    cout<<s1<<endl;
    cout<<s1[1]<<endl;


string s1="abc";
s1.clear();
cout<<s1;    


string s1="nincompoop";
s1.erase(3,4);
cout<<s1;


string s1="abc";
if(s1.empty()==0){
  cout<<"String is not empty";
}else{
  cout<<"String is empty";
}


string s1="abc";
string s2="xyz";

if(s1.compare(s2)!=0){
  cout<<"Strings are not equal";
}else{
  cout<<"Strings are equal";
}


string s1="nincompoop";
s1.insert(2,"lol");
cout<<s1<<endl;
return 0;
}


string s1="nincompoop";
cout<<s1.find("com")<<endl;
return 0;
}

string s1="nincompoop";
cout<<s1.size()<<endl;


string s1="nincompoop";
string s2=s1.substr(6,4);
cout<<s2;


string s1="786";
int a=stoi(s1);
cout<<a<<endl;


int x=65;
cout<<to_string(x)<<endl;
*/


//sorting in array
string s1="xcmmftuvnabiq";
sort(s1.begin(),s1.end());
cout<<s1<<endl;


return 0;
}