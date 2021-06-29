#include<iostream>
#include<string>

using namespace std;

string sol_w_extra_space(string str) {
    string s;
    int n = str.length();
    for (int i = n; i >= 0; i--) {
        //s.push_back(str[i]);
        s+=str[i];

    }
    return s;
}

void optimal_sol(string *str, int low, int high) {

    if (low >= high) {
        return;
    }
    char temp = (*str)[low];
    (*str)[low] = (*str)[high];
    (*str)[high] = temp;
    optimal_sol(str, low + 1, high - 1);
}

int main() {
    string str = "Crack it.";
    cout<<sol_w_extra_space(str)<<endl; //space O(n) time O(n)
    optimal_sol(&str, 0, str.length() - 1); //space O(1) time n/2 => O(n)
    cout << str;
    return 0;
}