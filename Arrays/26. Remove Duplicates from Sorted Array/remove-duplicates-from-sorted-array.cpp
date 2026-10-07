class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int element = nums[0];
  int swapper = 1;

  for(int i = 1; i < nums.size();i++){

    if(nums[i] != element){
      element =nums[i];
      swap(nums[i] , nums[swapper]);
      swapper++;
    }
  }
  return swapper;
    }
};