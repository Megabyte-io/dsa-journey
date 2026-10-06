class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int oneProgCount =0;
  int oneCount =0;

  for(int i =0; i < nums.size(); i++){
    if(nums[i] == 1){
      oneProgCount++;
    }else{
      if(oneProgCount > oneCount){
        oneCount = oneProgCount;
        oneProgCount = 0;
      }else if(oneCount>=oneProgCount){
        oneProgCount =0;
      }
    }

    if(i == nums.size()-1){
     
      if(oneProgCount > oneCount){
        oneCount = oneProgCount;
        oneProgCount = 0;
      }
    }

  }

  
  return oneCount;
    }
};