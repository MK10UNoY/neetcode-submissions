class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> product(n,1);
        int prefix = 1;
        for(int j=0;j<n;j++){
            product[j]=prefix;
            prefix*=nums[j];
        }
        int suffix = 1;
        for(int j=n;j>0;j--){
            product[j-1]*=suffix;
            suffix*=nums[j-1];
        }
        return product;
    }
};
