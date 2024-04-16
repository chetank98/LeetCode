class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int j=0,count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                count++;
            }
            else{
                nums[j++]=nums[i];
            }
        }
        return nums.size()-count;
    }
};