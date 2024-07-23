#include<iostream>
using namespace std;
int main(){
    int fage,sage,diff;
    cin>>fage;
    cin>>sage;
    diff=fage-sage;
    if(diff>sage){
        cout<<"after "<<diff-sage <<" years ";
    }
    else{
        cout<<"before "<<sage -diff <<" years ";
    }
}