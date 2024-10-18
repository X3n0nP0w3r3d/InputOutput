#include <bits/stdc++.h>
#define opt() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int findGCD(vector<int>& nums) {
    opt();
    sort(nums.begin(), nums.end());
    int a = nums.front();
    int b = nums.back();
    while(a>0 && b>0){
        a>b ? a=a%b : b=b%a;
    }
    if(a>b){
        return a;
    } else {
        return b;
    }
}
