class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());

  int count =0;
  int majCount =0;
  int majorityElement =0;

  for (int i = 0; i < nums.size(); i++) {
    count++;

    if(i != nums.size()-1){

      if(nums[i] != nums[i+1]){

        if(count > majCount){
          majCount = count;
          majorityElement = nums[i];
          count = 0;
        }else count =0; 
      }
    }

    if(i == nums.size()-1 && nums.size() != 1){
            
      if(nums[i-1] == nums[i]){

        if(count > majCount){
          majCount = count;
          majorityElement = nums[i];
          count = 0;
        }

      }
    }
    
    if(nums.size() == 1){
      return nums[0];
    }
  }


  return majorityElement;
    }
};