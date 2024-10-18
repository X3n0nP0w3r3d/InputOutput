#include <bits/stdc++.h>
#define opt() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    opt();
    int n;
    int fence_height;
    int height;
    cin >> n >> fence_height;
    int req_width = n;
    for(int i=0; i<n; i++){
        cin >> height;
        if(height > fence_height){
            req_width++;
        }
    }
    cout << req_width;
    return 0;
}