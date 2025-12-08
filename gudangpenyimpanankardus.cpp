#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, p, l; cin >> n >> p >> l;
    
    long long low = 0;
    long long mid = 0;
    long long high = max(p, l) * n;
    while(low < high){
        mid = (low + high) / 2;
        
        long long fitP = mid / p;
        long long fitL = mid / l;
        
        __int128 mul = (__int128) fitL * fitP;
        if(mul >= n){
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    cout << low << endl;
}