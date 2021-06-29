#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

void display(map<char, int> m1){
    
    for(auto x:m1){
        cout<<x.first<<":"<<x.second<<endl;
    }
}
void display(unordered_map<char, int> m1){
    
    for(auto x:m1){
        cout<<x.first<<":"<<x.second<<endl;
    }
}

void ordered_map(){
    
    map<int, int> m;
    m[2] = 20;//logn
    cout<<m[2]<<endl;//logn
    map<char, int> m1;

    string a = "abbaa";
    
    for(auto x:a ){
        m1[x]++;
    }

    display(m1);

}

void un_ordered_map(){
    

    unordered_map<char, int> m1;

    string a = "abbaa";
    
    for(auto x:a ){
        m1[x]++;
    }

    display(m1);
}


int main(){
    
    ordered_map(); //insert clear takes O(logn)  implimentation as BST 
    un_ordered_map(); //insert takes O(n) clear takes O(1) because implimentation as hashing open hashing

    return 0;
}