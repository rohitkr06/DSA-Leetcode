class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> v;
        
        int k=2;
        while(k--){
        for(int i=0;i<nums.size();i++)
            v.push_back(nums[i]);
    }
        return v;
    }
};