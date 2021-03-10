#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        if(height.empty())
            return 0;

        int ans=0;
            for(int i=1;i<height.size()-1;i++){
                int maxLeft=0,maxRight=0;
                for(int j=i;j>=0;j--){
                    maxLeft=max(maxLeft,height[j]);
                }
                for(int j=i;j<height.size();j++){
                    maxRight=max(maxRight,height[j]);
                }
                ans+=abs(min(maxLeft,maxRight)-height[i]);
            }
        return ans;
    }
};

int main() {
    Solution s;

    vector<int>data(10,1);
    cout<<s.trap(data)<<endl;
    return 0;
}


