class Solution {
public:
    vector<int> nums;
    vector<int> nums_copy;
    Solution(vector<int>& nums) {
        this->nums=nums;
        this->nums_copy = nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return nums_copy;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
         // std::srand ( unsigned ( std::time(0) ) );
        random_shuffle(this->nums.begin(),this->nums.end());
        return this->nums;
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
