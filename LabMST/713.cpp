class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k == 0) return 0;
        int left = 0, right = 0;
        int count = 0;
        long long prod = 1;
        while(right < nums.size()){
            prod *= nums[right];
            while(prod >= k && left <= right){
                prod = prod / nums[left];
                left++;
            }
            count += right - left + 1;
            right++;
        }
        return count;
    }
};
