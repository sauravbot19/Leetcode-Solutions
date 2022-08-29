// remove element leetcode solution
// c++

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        vector <int> :: iterator index;
        index = nums.begin();
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == val) {
                nums.erase(index);
                index--; i--;
            }
            index++;
        }
        return nums.size();
        
    }
};
