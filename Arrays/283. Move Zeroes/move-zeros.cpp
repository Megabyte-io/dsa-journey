class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         vector<int> nums2;
  
  int sz = nums.size();
  int zeroCount =0;

  for(int i =0 ; i < sz ; i++){
    if(nums[i] == 0){
      zeroCount++;
    }else {
      nums2.push_back(nums[i]);
    }
  }

  nums2.insert(nums2.end() , zeroCount , 0);

  nums = {};

  for(auto x: nums2){
    nums.push_back(x);
  }
    }
};