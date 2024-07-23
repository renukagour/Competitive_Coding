#include<bits/stdc++.h>
using namespace std;
int main(){
    string n1,n2;
    int len1,len2,num1,num2;
    cin>>n1;
    cin>>n2;
    len1=n1.size();
    len2=n2.size();
    if(len1>len2)
    cout<<n2<<endl;
    else if(len2>len1)
     cout<<n2<<endl;
    else{
        for(int i=0;i<len1;i++){
             num1=n1[i]-48;
             num2=n2[i]-48;
            if(num1>num2){
                cout<<n1<<endl;
                break;
            }
            else if(num2>num1){
                cout<<n2<<endl;
                break;
            }
            if(n1[i]>n2[i])
            {
                 cout<<n1<<endl;
                break;
            }
             if(n2[i]>n1[i])
            {
                 cout<<n2<<endl;
                break;
            }
        }
        if(num1==num2)
         cout<<"same";
    }

}