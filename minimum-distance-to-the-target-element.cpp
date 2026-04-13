class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
       int min = nums.size();
       for(int i=0 ; i < nums.size() ; i++){
        if(nums[i] == target){
           int dist = abs(i - start);
            if(dist < min){
                min = dist;
            }
        }
       }
       return min; 
    }
};
