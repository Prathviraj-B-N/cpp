#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main(){
    
    map<int, int> m;
    
    m[2] = 20;//logn
    cout<<m[2]<<endl;//logn

    map<char, int> m1;

    string a = "abbaa";
    
    for(auto x:a ){
        m1[x]++;
    }

    for(auto x:m1){
        cout<<x.first<<":"<<x.second<<endl;
    }

    return 0;
}