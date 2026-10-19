class Solution {
public:
    int count(vector<int>& nums,int pages){
        int students=1;
        long long pagesStudent=0;
        for(int i=0;i<nums.size();i++){
            if(pagesStudent + nums[i] <=pages){
                pagesStudent += nums[i];
            }
            else{
                students += 1;
                pagesStudent =nums[i];
            }
        }
        return students;
    }

    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        if(k>n)return -1;
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid=(low+high)/2;
            int students=count(nums,mid);
            if(students>k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};