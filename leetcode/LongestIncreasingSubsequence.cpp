#include <bits/stdc++.h>

using namespace std;

int lengthOfLIS(vector<int>& nums) {
    vector<int> dp(nums.size(), 1);
    int res = 1;
    for(int i=1;i<nums.size();i++){
        for(int j=0; j<i; j++){
            if(nums[j] < nums[i]){
                dp[i] = max(dp[j]+1, dp[i]);
            }
        }
        res = max(res, dp[i]);
    }
    return res;
}

// wtf
int lengthOfLISCRACKED(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp;
        int len=1;
        temp.push_back(nums[0]);
        for(int ind=1; ind<n; ind++){
            if(nums[ind]>temp.back()){
                temp.push_back(nums[ind]);
                len++;
            }
            else{
                int lowerbound=lower_bound(temp.begin(),temp.end(),nums[ind])- temp.begin();
                temp[lowerbound]=nums[ind];
            }
        }

        return len;
    }

int main(){
    vector<int> input = {4,10,4,3,8,9};
    cout << lengthOfLIS(input);
    return 0;
}