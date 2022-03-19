#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void travstring(string &str, int N){
    string e;
    string o;
    for(int i = 0; i< N; i++){
        if (i%2 == 0){
            e.push_back(str[i]);
        }
         if (i%2 != 0){
            o.push_back(str[i]);
        }
    }
    cout<<e<<" "<<o;
}


int main() {
    int T;
    cin>>T;
    string s;
    cin>>s;
    travstring(s, s.length());
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
