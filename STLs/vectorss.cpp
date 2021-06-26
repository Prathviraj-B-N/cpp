#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

bool rev(int x,int y){
    return x>y;
}

int main(){
    //std::vector
    vector<int> v = {1,6,5,8,11,0};
    sort(v.begin(),v.end());
    bool searchRes = binary_search(v.begin(),v.end(),6);
    cout<<searchRes;
    searchRes = binary_search(v.begin(),v.end(),2);
    cout<<searchRes;

    //add some duplicate elements
    v.push_back(5);
    v.push_back(5);
    v.push_back(5);
    v.push_back(5);
    v.push_back(5);
    sort(v.begin(),v.end());

    //find first occurance of ele >= 5
    vector<int>::iterator it = lower_bound(v.begin(),v.end(),5);

    //find first occurance of ele > 5
    //vector<int>::iterator it2 = upper_bound(v.begin(),v.end(),5);
    auto it2 = upper_bound(v.begin(),v.end(),5);
    cout<<*it<<*it2<<endl;

    //frequency of 5 in v
    cout<<it2-it<<endl;

    //sort in descending order
    sort(v.begin(),v.end(),rev);

    //vector<int>::iterator it3 = v.begin();
    // for(;it3!= v.end();it3++){
    //     cout<<*it3<<" ";
    // }
    cout<<"iterating without reference:";
    for(auto x: v){
        //x is just a img i.e immutable
        ++x;
        cout<<x<<" ";
    }

    cout<<"\noriginal vector didnt change:";
    for(auto x: v){
        cout<<x<<" ";
    }

    cout<<"\noriginal vector changes using reference:";
    for(auto &x: v){
        //x is reference i.e mutable
        cout<<++x<<" ";
    }
    return 0;
}