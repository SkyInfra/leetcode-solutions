class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int end = 0;
         int ans = 0;
          int farthest = 0 ;
          for(int i = 0 ; i < n; i++){
            farthest = max(farthest, nums[i] + i);

            if(farthest >= n)(
                ans++;
                return ans;
            )

            if(i == end ){
                ans++;
                end = farthest ;
            }
          }
          return ans;
    }
};