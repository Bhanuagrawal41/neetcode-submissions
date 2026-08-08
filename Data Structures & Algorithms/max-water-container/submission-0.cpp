class Solution {
public:
    int maxArea(vector<int>& heights) {
       int right = heights.size() - 1;
        int left = 0;
        int mx = 0;

        while(left < right){
            int curr_mx = min(heights[right], heights[left]) * (right - left);
            if(heights[left] < heights[right]){
                left++;

            }else{
                right--;
            }


            if(curr_mx > mx){
                mx = curr_mx;
            }

        }
        return mx; 
    }
};
