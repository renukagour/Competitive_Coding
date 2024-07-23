#include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cin>>n;
    for(i=0;i<n;i++){
        
        for(j=0;j<=i;j++){
           cout<<" ";
        }
        for(j=0;j<=n-1-i;j++)
          {
            if(j==0||j==(n-1-i)||i==0)
             cout<<"* ";
            else 
              cout<<"  ";
          }
        cout<<endl;
    }
    for(i=1;i<n;i++){
        for(j=0;j<=n-1-i;j++)//for spaces
          cout<<" ";
        for(j=0;j<=i;j++){
          {
            if(j==0||j==i||i==n-1)
               cout<<"* ";
            else
               cout<<"  ";
          }
        }
        cout<<endl;
    }
   
      
}