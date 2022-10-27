class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size =nums.size();
         int ans =  0;
	unordered_map<int, int> m;
	for(int i = 0; i <size; i++)
	    m[nums[i]]++;
	
	
	for(auto i : m){
	    if(i.second > size / 2){
	        ans = i.first;
	    }

	
    }
       return ans;
    }
};