#include<iostream>
#include<vector>

using namespace std;

void bruteForce_sol(vector<int> list){
    int min = list[0];
    int max = list[0];

    if(list.capacity() == 1){
        cout<<"Both min and max : "<<list[0]<<endl;
    }
    //for(auto X:list)
    for(auto it = list.begin();it!=list.end();it++){
        if(*it>max){
            max = *it;
        }
        if(*it<min){
            min = *it;
        }
    }
    cout<<"Max : "<<max<<endl;
    cout<<"Min : "<<min<<endl;

}

void tournament_method(vector<int> list){
    
}

int main(){

    vector<int> list= {1,2,3,8,6,5,4,12};
    bruteForce_sol(list); //O(n)
    tournament_method(list);

    return 0;
}