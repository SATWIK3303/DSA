class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=(low+high)/2;
            int sum=0;
            for(int i=0;i<n;i++){
                sum=sum+ceil((double)(nums[i])/(double)(mid));
            }
            if(sum<=threshold){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};