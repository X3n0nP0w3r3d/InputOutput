#include <bits/stdc++.h>
#define opt() ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);

using namespace std;

int main(){
    opt();
    int n=0;
    int a=0;
    int b=0;
    int c=0;
    int d = 0;
    int count = 0;
    int taxis = 0;
    cin >> n;
    for(int i=0; i < n; i++){
        cin >> count;
        switch(count){
            case 1:
                a++;
                break;
            case 2:
                b++;
                break;
            case 3:
                c++;
                break;
            case 4:
                d++;
                break;
        }
    }

    // taxis required
    taxis+=d+c;
    a -= c;
    if(a<0) a=0;
    if(b%2){
        taxis+=((b/2) + 1);
        a -= 2;
        if(a < 0) a=0;
    } else {
        taxis += b/2;
    }
    taxis += ceil(a/4.0);
    cout << taxis;
    return 0;
}