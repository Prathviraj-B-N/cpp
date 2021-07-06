#include<iostream>
#include<vector>

using namespace std;

void bruteForce_sol(vector<int> list){
    int min = list[0];
    int max = list[0];

    if(list.size() == 1){
        cout<<"Both min and max : "<<list[0]<<endl;
        cout<<"Comparisions: 0"<<endl;

    }
    if(list.size() == 2){
        int min = 0;
        int max = 0;

        if(list[0]<list[1]){
            min = list[0];
            max = list[1];
        } else{
            min = list[1];
            max = list[0];
        }
        cout<<"min and max : "<<min<<" "<<max<<endl;
        cout<<"Comparisions: 1"<<endl;
    }
    //for(auto X:list)
    int c =0;
    for(auto it = list.begin()+1;it!=list.end();it++){
        c++;
        if(*it>max){ 
            
            max = *it;
        }
        c++;
        if(*it<min){
            
            min = *it;
        }
    }
    cout<<"Max : "<<max<<endl;
    cout<<"Min : "<<min<<endl;
    cout<<"Comparisions: "<<c<<endl;


}

class maxMin{
    int max,min;
void tournament_method(vector<int> list,int low,int high){
    if(low == high){
        
    }
}
};


int main(){

    vector<int> list= {1,2,3,8,6,5,4,12};
    bruteForce_sol(list); //O(n)  no of comparisions 2n-2
    
    tournament_method(list,0,(list.size()-1)/2,list.size()-1);

    return 0;
}