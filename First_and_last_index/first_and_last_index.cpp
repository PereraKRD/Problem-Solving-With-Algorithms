#include <iostream>
#include <vector>

using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
        int startingPosition = -1, endingPosition = -1;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] == target){
                startingPosition = i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(nums[i] == target){
                endingPosition = i;
                break;
            }
        }
        return {startingPosition, endingPosition};
    }

    int main () {
        vector<int> nums = {5, 7, 7, 8, 8, 10};
        int target = 11;
        vector<int> ans = searchRange(nums, target);
        cout << ans[0] << " " << ans[1];
        return 0;
    }
