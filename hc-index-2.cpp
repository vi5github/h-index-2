class Solution {
public:
    int hIndex(vector<int>& nums) {
        int len = nums.size();
        int low = 0;
        int high = nums.size() - 1;
        int ans = 0;
        

        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] == (len - mid)){
                return nums[mid];
            }else if(nums[mid] > (len - mid)){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return 0;
    }
};