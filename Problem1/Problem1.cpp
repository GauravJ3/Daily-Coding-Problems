#include<iostream>
#include<vector>
using namespace std;

bool summa(vector<int> l, int k){
    // iterating over each possible combination in the list
    for(int i=0;i<l.size();i++){
        for(int j=i+1;j<l.size();j++){
            // checking if sum for each possible combination is equal to k
            if(l[i] + l[j] == k){
                return true;
            }
        }
    }
    // return false if a sum is not equal to k for any combination
    return false;
}

int main(){
    vector<int> l = {10,15,3,7};
    int k = 17;
    if(summa(l,k)){
        cout<<"true";
    }else{
        cout<<"false";
    }
}