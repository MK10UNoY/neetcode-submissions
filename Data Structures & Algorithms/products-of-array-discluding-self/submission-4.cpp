class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int l=nums.size();
        vector<int> product(l,1);
        for(int i=0;i<l;i++){
            for(int j=0;j<l;j++){
                if(i!=j){
                    product[i]*=nums[j];
                }
            }
        }   
        return product; 
    }
};
