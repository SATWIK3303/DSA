class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n=rowIndex;
        vector<int>ansRow;
        long long ans=1;
        ansRow.push_back(1);  //first element is always 1
        for(int i=1;i<=n;i++){
            ans=ans*(n-i+1);
            ans=ans/(i);
            ansRow.push_back(ans);//next elements
        }
        return ansRow;
    }
};