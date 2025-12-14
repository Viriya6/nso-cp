#include <bits/stdc++.h>
using namespace std;

const long long MAXN = 1e12;

int main(){
    long long n; cin >> n;
    long long m; cin >> m;
    long long a[n]; 
    for(long long i = 0; i < n; i++){ 
        cin >> a[i]; 
    }

    sort(a, a+n);
    long long sumall = 0;

    for(long long i = 0; i < n; i++){ 
        sumall += a[i]; 
    }

    if(sumall < m){
        cout << "-1" << endl;
    } else {
        long long sum = 0; 
        long long ans = -1;
        long long low = 0;
        long long high = a[n - 1];
        long long mid = 0;

        while(low <= high){
            sum = 0;
            mid = (low + high) / 2;

            for(long long i = 0; i < n; i++){
                if(mid < a[i]){
                    sum += a[i] - mid;
                }
            }
            if(sum >= m){
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        cout << ans << endl;
    }
}