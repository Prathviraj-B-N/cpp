/*problem:
input : n intervals , ex: [10,20] , [32,65] etc.,
        key : 21
        return the range in which key exists , if dosnt exist display msg
        output: not found

        key : 19
        [10,20]
*/

#include<iostream>
#include<set>
using namespace std;

void operate(){
    set<pair<int,int>> pairs = {{10,20},{32,65}}; 
    int key = 19;
    auto it = pairs.upper_bound({key,INT_MAX});
    it--;
    pair<int,int> p = *it;
    if(key>=p.first && key<=p.second){
        cout<<"["<<p.first<<","<<p.second<<"]"<<endl;
    }
    else{
        cout<<"Not found!"<<endl;
    }
    

}
int main(){

    operate();
    return 0;
}