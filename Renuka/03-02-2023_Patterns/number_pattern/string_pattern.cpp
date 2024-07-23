#include<iostream>
using namespace std;
int main(){
    int c=0,i,j;
    string s;
    cin>>s;
   
    for(i=0;i<s.length();i++){
        for(j=0;j<=i;j++){
            cout<<s[c++]<<" ";
            if(s[c]=='\0')
              c=0;
            
        }
        cout<<endl;
    }
    }
