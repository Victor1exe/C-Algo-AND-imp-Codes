#include<iostream>
using namespace std;
int main(){
    // Dynamically allocate memory for a 2D array
    /*
    // 1st method : using single pointer
    int m=3,n=4;

    int*arr=new int[m*n];

    //Supplying values
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        {
            cin>>*(arr+i*n+j); //important
        }
        }
     
    //printing values
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        {
            cout<<*(arr+i*n+j)<<" ";
        }cout<<endl;
        }

    delete[] arr;*/
    
    /* //2nd method: aaray of pointers   //needed to be understood:

     int m=3;int n=4;  
     int **a=new int*[m];
     for(int i=0;i<m;i++){
        a[i]=new int[n];
     }

    //Supplying values
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    //printing values
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }

    for(int i=0;i<m;i++){
        delete[] a[i];
    }
    
    delete[] a;
*/

    // Dynamically allocate memory for a 3D array
     int m=3,n=3,o=3;
     int*arr=new int[m*n*o];
     cout<<"Enter the values :"<<endl;

     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<o;k++){
                cin>>*(arr+i*n*o+j*o+k);  // important
            }
        }
     }

     cout<<"The values are :"<<endl;

     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<o;k++){
                cout<<*(arr+i*n*o+j*o+k)<<" ";
            }
        }
     }

    delete[] arr;
    return 0;
}