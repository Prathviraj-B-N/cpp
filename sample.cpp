#include<cmath>
#include<iostream>
#include<map>
#include<set>
#include<vector>
#include<algorithm>

#define ll long long
using namespace std;



set<ll> soe_prime(ll n){
    set<ll> s;

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
set<ll> prime = soe_prime(100);
ll gcd(int a, int b){
    while(b!=0){
        ll rem = a%b;
        a=b;
        b=rem;
    }
    return a;
}

void app(){
    ll n;
    map<ll,ll> v;
    
    cin>>n;
    for(ll i=0;i<n;i++){
        ll ele;
        cin>>ele;
        if(ele == 1){
            v[1]+=1;
        }
        int flag =0;
        for(int i : prime){
            if(ele%i == 0){
                flag = 1;
                v[i]+=(ele/i);
                break;
            }
        }
        if(!flag){
            v[ele]+=1;
        }

    }
    auto it = v.end();
    it--;
    // cout<<it->first<<endl;
    // cout<<"map"<<endl;
    // for(auto x:v){
    // cout<<x.first<<" " <<x.second<<endl;
    // }
    
    ll ans = v.begin()->first;

    for(auto x:v){
        if(x.first != it->first){
            ans = gcd(ans,x.first);
        }
    }
    
    //cout<<"gcd: "<<ans<<endl;
    //replace largest ele with ans
    int count = it->second;
    v.erase(it->first);
    v[ans] += count;

    // cout<<"map"<<endl;
    // for(auto x:v){
    // cout<<x.first<<" " <<x.second<<endl;
    // }

    ll res=0;
    for(auto x:v){
        res+=(x.first/ans)*x.second;
    }
    cout<<res<<endl;
    v.clear();
}

int main(){
    ll t;
    cin>>t;
    
    while(t--){
        app();
    }
    return 0;
}