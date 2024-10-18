#include <bits/stdc++.h>
#define opt() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

// I CBA TO OPTIMISE (WORKS IN QUADRATIC TIME 100%)
class Solution {
public:
    #define opt() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    bool checkobstacle(int x, int y, vector<vector<int>> obst){
    for(auto coord : obst){
        if(coord[0]==x && coord[1]==y){
            cout << "OBSTACLE" << endl;
            return false;
        }
    }
    return true;
}
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
            opt();
    int heading = 0;
    int curX = 0;
    int curY = 0;
    int maxDist = 0;
    for(auto ins : commands){
    switch(ins){
        case -2:
            heading -= 90;
            if(heading < 0) heading += 360;
            break;
        case -1:
            heading += 90;
            if(heading >= 360) heading -= 360;
            break;
        default:
            switch(heading){
                case 0:
                    while(ins > 0){
                        if(checkobstacle(curX, curY+1, obstacles)){
                            curY+=1;
                            ins--;
                            maxDist = max(int(pow(curX,2) + pow(curY,2)), maxDist);
                        } else {
                            break;
                        }
                    }
                    break;
                case 90:
                    while(ins > 0){
                        if(checkobstacle(curX+1, curY, obstacles)){
                            curX+=1;
                            ins--;
                            maxDist = max(int(pow(curX,2) + pow(curY,2)), maxDist);
                        } else {
                            break;
                        }
                    }
                    break;
                case 180:
                    while(ins > 0){
                            if(checkobstacle(curX, curY-1, obstacles)){
                                curY-=1;
                                ins--;
                                maxDist = max(int(pow(curX,2) + pow(curY,2)), maxDist);
                            } else {
                                break;
                            }
                        }
                    break;
                case 270:
                    while(ins > 0){
                        if(checkobstacle(curX-1, curY, obstacles)){
                            curX-=1;
                            ins--;
                            maxDist = max(int(pow(curX,2) + pow(curY,2)), maxDist);
                        } else {
                            break;
                        }
                    }
                    break;
            }


    }
    }  
    return(maxDist);
    }
};