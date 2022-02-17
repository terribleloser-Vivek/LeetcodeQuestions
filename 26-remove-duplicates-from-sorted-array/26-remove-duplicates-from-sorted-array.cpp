class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int i=0,j=0,k=0;
     while(i<nums.size() && j<nums.size()){
         if(i>0 and nums[i]==nums[j]){
             i++;
             continue;
         }
         nums[k]=nums[i];
         j=i;
         i++;
         k++;
     }
     return k;
        
    }
};