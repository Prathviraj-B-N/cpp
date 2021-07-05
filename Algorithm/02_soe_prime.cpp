#include<iostream>
#include<set>
#include<vector>

using namespace std;

set<int> ans(int n){
    set<int> s;

    vector<bool> prime(n+1,true);

    for(int i=2;i*i<=n;i++){
        if(prime[i] == true){
            for(int j = i*i;j<=n;j+=i){
                prime[j] = false;
            }
        }
    }

    for (int p = 2; p <= n; p++)
        if (prime[p])
            s.insert(p);
    return s;
}


int main(){
    int n;
    cin>>n;
    set<int> s = ans(n);
    for(int x:s){
        cout<<x<<" ";
    }
    return 0;
}