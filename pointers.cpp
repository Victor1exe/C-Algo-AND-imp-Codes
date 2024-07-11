#include<iostream>
using namespace std;


    // basics of pointers
    /*int a=10;
    int *aptr=&a;
    cout<<aptr<<endl;
    cout<<*aptr<<endl;
    *aptr=20*2;
    cout<<a<<endl;
    cout<<*aptr<<endl;*/

    //pointers and arrays
    /*
    int arr[]={10,20,30,40,50};
    cout<<*arr<<endl;
    int*aptr=arr;
    for(int i=0;i<5;i++){
        cout<<*aptr<<endl;
        aptr++;
    }
     for(int i=0;i<5;i++){
        cout<<*(arr+i)<<endl;
    }*/
    
    // Call by reference and Calll by value

    /*void swap(int a,int b){
        int temp; 
        temp=a;
        a=b;
        b=temp;
    }


    int main(){
        int a,b;
        a=2;b=4;
        swap(a,b);
        cout<<a<<" "<<b<<endl;
        return 0;
    }
    
    
   void swap(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
   }

    int main(){
        int a,b;
        a=2;b=4;
         int*aptr=&a;
         int*bptr=&b;

        //swap(aptr,bptr);  OR
        swap(&a,&b);
        cout<<a<<" "<<b<<endl;
        return 0;
    }*/