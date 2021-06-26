#include <iostream>
#include<set>

using namespace std;

void printS(set<int> s){
    for(auto x:s){
        cout<<x<<" ";
    }
}
int main(){
    //set: unordered collection of 'distinct' elements
    // std::set maintains ascending order
    set<int> s = {2,3,5,7,7};
    s.insert(1); //logn

    printS(s);

    //search or find
    set<int>::iterator find_ = s.find(7);
    //s.end() is one ele past last ele
    if(find_==s.end()){
        cout<<"not found\n";
    }
    
    else{
        cout<<"found\n";
    }

    //ele >= 2
    auto it2 = s.lower_bound(2);
    cout<<*it2<<endl;

    s.erase(1);//logn
    printS(s);
    return 0;
}