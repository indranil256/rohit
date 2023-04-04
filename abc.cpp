#include<iostream>
using namespace std;


int main(){
     int r=3,c=3;
      int count = 1 ;
     for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            cout<<count;
            count++;
            cout<<" ";
        }
         cout<<endl;
     }
    
    return 0;
}