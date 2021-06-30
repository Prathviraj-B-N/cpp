#include<iostream>
#include<vector>
#define MAX_BAG_SIZE 50
using namespace std;
class x{

private:
vector<pair<int,int>> items = {{10,60},{20,100},{30,120}};

public:
int max(int a,int b){
    return (a>b?a:b);
}
int greedy(int i,int cur_weight){
    
    if(i>=items.capacity())
    return 0;

    if(cur_weight+items[i].first>MAX_BAG_SIZE ){
        return greedy(i+1,cur_weight);
    }

    int pick = greedy(i+1,cur_weight+items[i].first)+items[i].second;
    int dont_pick =  greedy(i+1,cur_weight);
    
    return max( pick, dont_pick );

}

}
;


int main(){   
    x ob ;
    cout<<ob.greedy(0,0); //O(2^n)
    return 0;
}