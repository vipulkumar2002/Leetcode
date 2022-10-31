class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>v;
        
        int s = numbers.size();
        int l= 0;
        int r=s-1;
       while(l<r){
            int sum = numbers[l] + numbers[r];
            
            if(sum==target){
             v.push_back(l+1);
                v.push_back(r+1);
            }
            
        if(sum > target ){
            r--;
        }else{
            l++;
        }
           
        }
        return v;
    }
};