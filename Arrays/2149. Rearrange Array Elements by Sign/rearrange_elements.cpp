class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
         vector<int> v1;
  vector<int> v2;

  int low1 =0;
  int low2 =0;

  int sz = nums.size();

  for(int i= 0; i < nums.size(); i++){

    if(nums[i] > 0){
      v1.push_back(nums[i]);
    }
  }

  for(int j= 0; j < nums.size(); j++){

    if(nums[j] < 0){
      v2.push_back(nums[j]);
    }
  }

  nums = {};

  for(int k =0; k < sz/2;k++){

    nums.push_back(v1[low1]);
    low1++;

    nums.push_back(v2[low2]);
    low2++;
  }
  return nums;
    }
};