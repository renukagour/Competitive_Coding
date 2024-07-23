#include<bits/stdc++.h>
using namespace std;
bool containDuplicate(vector<int> &num){
  /*  for(int i=0;i<num.size();i++){
        for(int j=i+1;j<num.size();j++){
           if(i!=j) {
            if(num[i]==num[j]) return true;
           }
        }
    }
    return false;
   */
  unordered_set<int> set;
  for (int  i = 0; i < num.size(); i++)
  {
    if(set.count(num[i])) return true; //checks duplicate
    set.insert(num[i]);
    /* code */
  }
  return false;
   
}

//exceed time limit
int main(){
 vector<int> num={1,2,3,1};
 cout<<containDuplicate(num);
}