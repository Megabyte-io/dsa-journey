class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k > nums.size()){
        int mf = k/nums.size();

        k -= nums.size()*mf;
    }

    k = nums.size()-k;

    vector<int> v = {nums.begin() + k,nums.end()};

    nums.erase(nums.begin()+k,nums.end());

    nums.insert(nums.begin(),v.begin(),v.end());
    }
};